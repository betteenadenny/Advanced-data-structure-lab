#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*temp,*front,*rear;
void enqueue()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data;");
	scanf("%d",&newnode->data);
	if (front==NULL)
	{
		front=newnode;
		rear=newnode;
		newnode->next=front;
	}
	else
	{
		rear->next=front;
		newnode->next=front;
		rear=newnode;
	}
}
void dequeue()
{
	if(front==NULL)
	printf("Queue is empty");
	else if(front==rear)
	{
		temp=front;
		front=rear=NULL;
		free(temp);
	}
	else
	{
	temp=front;
	front=front->next;
	rear->next=front;
	free(temp);
	}
}
void display()
{ 
	temp=front;
	while(temp->next!=front)
	{
	printf("%d",temp->data);
	temp=temp->next;
	}
	printf("%d",temp->data);
}
void main()
{
front=rear=NULL;
int choice=0;
while(choice!=4)
{
	printf("1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			enqueue();
			break;
	   	case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
	}
}
}










































