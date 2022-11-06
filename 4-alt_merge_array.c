#include<stdio.h>
int main(){
	int array1[50],array2[50],merge[100],n,m,i,j;
	printf("Enter the size of first array:");
	scanf("%d",&n);
	printf("Enter first array elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("Enter the size of second array:");
	scanf("%d",&m);
	printf("Enter second array elements:");
	for (i=0;i<m;i++)
	{
		scanf("%d",&array2[i]);
	}
	printf("first array\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",array1[i]);
	}
	printf("\nsecond array\n");
	for (i=0;i<m;i++)
	{
		printf("%d\t",array2[i]);
	}
	for (i=0,j=0;i<n;i++,j+=2)
	{
		merge[j]=array1[i];
	}
	for (i=0,j=1;i<m;i++,j+=2)
	{
		merge[j]=array2[i];
	}
	printf("\nArayy after merging\n");
	for (i=0;i<(n+m);i++)
	{
		printf("%d\t",merge[i]);
	}
}
