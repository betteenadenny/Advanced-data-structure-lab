#include<stdio.h>
int main(){
	int a[50],i,x,pos=0,flag=0,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search elment:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if (a[i]==x)
		{
			flag=1;
			pos=i+1;
			break;
		}
	}
	if (flag==1)
		printf("Element found at position %d",pos);
	else
		printf("Element is not found");
}
			
