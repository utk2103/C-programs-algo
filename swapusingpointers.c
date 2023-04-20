#include<stdio.h>

void main()
{
int x,y,*a,*b,temp;
printf("Enter two numbers x and y");
scanf("%d%d",&x,&y);

printf("Value of x and y before swapping %d%d",x,y);
a=&x;
b=&y;

temp=*b;
*b=*a;
*a=temp;
printf("VAlue of x and y after swapping %d%d",x,y);



}