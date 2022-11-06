#include<stdio.h>
int main()
{
int a,b;
printf("Enter a nd b");
scanf("%d%d",&a,&b);
printf("Before swapping a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping a=%d and b=%d",a,b);
}
