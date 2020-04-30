#include<stdio.h>
int main()
{
int a,i,j;
printf("enter the no. of steps:");
scanf("%d",&a);
for(i=0;i<a;i++)
{
for(j=i;j>=0;j--)
{
printf("01");
}
printf("\n");
}
}
