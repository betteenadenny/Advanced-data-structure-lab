#include<stdio.h>
#include<stdlib.h>
#define s 5
int q[s],r=-1,f=-1;
void insert();
void delete();
void display();
void main(){
	int c; 	
	while(1){
	printf("\n 1.Insert 2.delete 3.display 4.exit\n ");
	printf("\n Enter choice:");
	scanf("%d",&c);
	switch(c){
	    case 1:insert();
	        break;
        case 2:delete();
	        break;
        case 3:display();
	        break;
        case 4:exit(0);
        default:printf("Wrong selection");
	    }}
	}
	void insert(){
	    if(r==(s-1))
	        printf("overflow");
        else{
            if(f==-1)
                f++;
            int n;
            printf("Enter elements:");
            scanf("%d",&n);
            r++;
            q[r]=n;
        }
	}
	void delete(){
	    if(f==1||f>r)
	        printf("Underflow");
        else{
            int t;
            t=q[f];
            printf("%d deleted",t);
            f++;
        }
	}
	void display(){
	   if(f==-1||f>r)
	        printf("Underflow no elements to print");
        printf("Elements in queue:");
        for(int i=f;i<=r;i++){
            printf("\n%d",q[i]);
        }
	}
