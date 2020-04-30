#include<stdio.h>
int main()
{
int a;
printf("enter a no. from 1 to 5:");
scanf("%d",&a);
switch(a)
{
case 1:printf("food item-burger\nprice-Rs 129");
break;
case 2:printf("food item-french fries\nprice-Rs 99");
break;
case 3:printf("food item-sandwich\nprice-Rs 149");
break;
case 4:printf("food item-pasta\nprice-Rs 179");
break;
case 5:printf("food item-pizza\nprice-Rs 239");
break;
default:printf("no such item is available");
break;
}
return 0;
}
