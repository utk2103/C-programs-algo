#include<stdio.h>

void main()
{
    int n,i,j;
    printf("Enter n");
    scanf("%d",&n);
    for("i=1;i<=n;i++")
    {
      for("j=1;j=n-i;j++")
      {
        printf("*");
      }
      printf("\n");
    }
}