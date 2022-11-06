#include<stdio.h>
int main(){
	int array[50],n,i,j,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Array elements are:\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\nSorted array elements are:\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}
