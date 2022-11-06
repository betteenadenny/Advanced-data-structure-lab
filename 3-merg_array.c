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
	for (i=0;i<n;i++)
	{
		merge[i]=array1[i];
		
	}
	j=i;
	for (i=0;i<m;i++)
	{
		merge[j]=array2[i];
		j++;
	}
	printf("\nMerged array\n");
	for (i=0;i<j;i++)
	{
		printf("%d\t",merge[i]);
	}
}
