#include<stdio.h>
int main(){
	int array1[50],array2[50],n,i,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter first array elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("Enter second array elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&array2[i]);
	}
	printf("Before swapping first array\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",array1[i]);
	}
	printf("\nBefore swapping second array\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",array2[i]);
	}
	for (i=0;i<n;i++)
	{
		temp=array1[i];
		array1[i]=array2[i];
		array2[i]=temp;
	}
	printf("\n\nAfter swapping first array\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",array1[i]);
	}
	printf("\nAfter swapping second array\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",array2[i]);
	}
}
