#include<stdio.h>
int main()
{
int arr1[3],arr2[5],i,j,mer[8];
printf("Enter the elements into first array");
for(i=0;i<=4;i++)
{
scanf("%d",&arr1[i]);
mer[i]=arr1[i];
}
j=i;
printf("Enter the elements into second array");
for(i=0;i<=4;i++)
{
scanf("%d",&arr2[i]);
mer[j]=arr2[i];
j++;
}
printf("The merged array is");
for(i=0;i<j;i++)
printf("%d\t",mer[i]);
}
