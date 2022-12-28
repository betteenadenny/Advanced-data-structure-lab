#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void begin_insert ();   
void last_insert ();  
void random_insert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
  
int main ()  
{  
    int choice =0;  
    while(choice != 9)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n");
        printf("5.Delete from last\n6.Delete node after specified location\n7.Show\n8.Exit\n");  
        printf("\nEnter your choice?:");         
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            begin_insert();      
            break;  
            case 2:  
            last_insert();         
            break;  
            case 3:  
            random_insert();       
            break;  
            case 4:  
            begin_delete();       
            break;  
            case 5:  
            last_delete();        
            break;  
            case 6:  
            random_delete();          
            break;  
            case 7:  
            display(); 
            break;  
            case 8:  
            exit(0);  
            break;  
            default:  
            printf("\nPlease enter valid choice..");  
        }  
    }  
}  
void begin_insert()  
{  
    struct node *newnode;    
    newnode = (struct node *) malloc(sizeof(struct node *));  
    if(newnode == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value:");    
        scanf("%d",&newnode->data);      
        newnode->next = head;  
        head = newnode;  
        printf("\nNode inserted");  
    }  
      
}
  
void last_insert()  
{  
    struct node *newnode,*temp;  
 
    newnode = (struct node*)malloc(sizeof(struct node));      
    if(newnode == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value:");  
        scanf("%d",&newnode->data);  
        
        if(head == NULL)  
        {  
            newnode -> next = NULL;  
            head = newnode;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = newnode;  
            newnode->next = NULL;  
            printf("\nNode inserted");  
          
        }  
    } 
}
 
void random_insert()  
{  
    int i,loc;   
    struct node *newnode, *temp;  
    newnode = (struct node *) malloc (sizeof(struct node));  
    if(newnode == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter element value:");  
        scanf("%d",&newnode->data);  
        printf("\nEnter the location after which you want to insert:");  
        scanf("%d",&loc);  
        temp=head;  
        for(i=0;i<loc-1;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }  
        } 
        newnode ->next = temp ->next;   
        temp ->next = newnode;   
        printf("\nNode inserted");  
    }  
}  
void begin_delete()  
{  
    struct node *temp;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        temp = head;  
        head = temp->next;  
        free(temp);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}  
void last_delete()  
{  
    struct node *temp,*temp1;  
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
    else  
    {  
        temp = head;   
        while(temp->next != NULL)  
        {  
            temp1 = temp;//storing second last node  
            temp = temp ->next;  
        }  
        temp1->next = NULL;  
        free(temp);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  
void random_delete()  
{  
    struct node *temp,*temp1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion :");  
    scanf("%d",&loc);  
    temp=head;  
    for(i=0;i<loc;i++)  
    {  
        temp1 = temp;       
        temp = temp->next;  
              
        if(temp == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    temp1 ->next = temp ->next;  
    free(temp);  
    printf("\nDeleted node %d ",loc+1);  
}  
void display()  
{  
    struct node *temp;  
    temp = head;   
    if(temp == NULL)  
    {  
        printf("The list is empty!!!");  
    }  
    else  
    {  
        printf("The elements in the linked list are\n");   
        while (temp!=NULL)  
        {  
            printf("%d\t",temp->data);  
            temp = temp -> next;  
        }  
    }
} 

   
