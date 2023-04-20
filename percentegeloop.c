#include<stdio.h>

void main()
{
int a,b,c,d,e,per;
printf("Enter marks of each subjects");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
per=(a+b+c+d+e)/5;
//printf("%d is percentage",per);
if(per>90)
{
    printf("You're doing excellent");
}
if(per>80&&per<90)
{
    printf("You're doing good keep it up");
}
else if(per>70&&per<80)
{
    printf("You need to do hardwork something you're missing");
}
else
{
printf("TU kya kar rha hai apni jindgi me");
}
}