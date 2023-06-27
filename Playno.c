#include<stdio.h>
int main() {

  
    int n,i,t,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            if(n%11==0)
            {
                printf("%d\n",n+2);
                break;
            }
            else if(n%4==0)
            {
                printf("%d\n",n-2);  
                break;
            }
            else
            {
                printf("%d\n",n*4);
               break;
            }
            
        }
    }  
}