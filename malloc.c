#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,*p;
printf("Enter memory size");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
if(p==NULL)
{
    printf("Memory is not allocated");
}
else
{
    printf("Memory allocated successfully");
for(i=0;i<=n;i++)
{
    printf("%n",p+i);
}
}
}