#include<stdio.h>
#include<stdlib.h>
#define max 100
int queue[max], rear=-1, front =-1;
void enqueue();
void dequeue();
void display();
int main()
{
	int option;
	do
	{
		printf("\n*******MENU*********");
		printf("\n1. ENQUEUE");
		printf("\n2. DEQUEUE");
		printf("\n3. DISPLAY");
		printf("\n4. EXIT");
		printf("\nEnter your option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1 : enqueue();
					 break;
			case 2 : dequeue();
					 break;
			case 3 : display();
					 break;
			case 4 : printf("\n\t EXIT POINT ");
					 exit(0);
            default:printf ("\n\t Please Enter a Valid Choice(1/2/3/4 )");
        }
	}while(option != 4);
	return 0;
}

void enqueue()
{
	int data;
	printf("Enter element : ");
	scanf("%d",&data);	
	if(rear == max-1)
	{
		printf("Queue is full.");
	}
	else if(front == -1 && rear == -1)
	{
		rear++;
		front++;
		queue[rear] = data;
	}
	else
	{
		rear++;
		queue[rear] = data;
	}
}

void dequeue()
{
	if(rear == -1 && front == -1)
	{
		printf("Queue is empty...");
	}
	else if (front == rear)
	{
		printf("dequeue : %d",queue[front]);
		rear=-1;
		front =-1;
	}
	else
	{
		printf("dequeue : %d",queue[front]);
		front++;
	}
}

void display()
{
	int i;
	if (rear == -1 && front == -1)
	{
		printf("Queue is empty");
	}
	else 
	{
		printf("\nThe elements in the queue are:\n");
		for(i=front; i<=rear; i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
