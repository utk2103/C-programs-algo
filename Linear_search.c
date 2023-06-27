#include<stdio.h>
int main()
{
    int a[20],n,item,pos=-1,i,found=0;
    printf("Enter no of elements & item to be search \n");
    scanf("%d %d", &n, &item);
    printf("Enter elements \n");
    for ( i = 0; i <= n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <= n; i++)
    {
        if (item == a[i])
        {
            pos=i;
            printf("%d is item found at %d Position \n",item, pos+1);
            found=1;
            break;
        }
        
    }
    
    
}