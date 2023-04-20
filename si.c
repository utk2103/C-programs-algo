#include<stdio.h>

void main()
{
int p,r,t,si;
printf("Enter principle 'p' rate'r' and time 't'");
scanf("%d%d%d",&p,&r,&t);
si=(p*r*t)/100;
printf("%d is the simple intrest",si);
}