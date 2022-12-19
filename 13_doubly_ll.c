#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head, *temp, *temp2;
int i;
void insertbeg()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else if(head->next==NULL)
    {
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=NULL;
        head->next=NULL;
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=NULL;
        head=newnode;
    }
}
void insertpos()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    int pos,i;
    printf("enter the position to insert: ");
    scanf("%d",&pos);
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    temp=head;
    for(i=1;i<pos-1;i++)
    {
      temp=temp->next;  
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
}
void insertend()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NULL;
    
}
void deletebeg()
{
    if(head==NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
}
void deletepos()
{
    int k;
    printf("enter the position");
    scanf("%d",&k);
    temp=head;
    for(i=1;i<k-1;i++)
    {
     temp=temp->next;   
    }
    temp2=temp->next;
    temp->next=temp2->next;
    temp2->next->prev=temp;
    free(temp2);
}
void deleteend()
{
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp2=temp->next;
    temp->next=NULL;
    free(temp2);
    
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void main()
{
    int c;
    while(1)
    {
        printf("\n1.insertion at beginning\n2.insertion at position\n3.insertion at end\n4.deletion at begining\n5.deletion at position\n6.deletion at end\n7.display\n8.exit\n");
        printf("\nenter the choice: \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertbeg();
            break;
            case 2:insertpos();
            break;
            case 3:insertend();
            break;
            case 4:deletebeg();
            break;
            case 5:deletepos();
            break;
            case 6:deleteend();
            break;
            case 7:display();
            break;
            case 8:exit(0);
            
        }
    }
    
}
