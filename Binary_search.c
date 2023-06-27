#include<stdio.h>

void main()
{
    int a[10], end, beg, mid, found ,i, item, n;
    printf("Enter the no of elements & element want to search");
    scanf("%d%d ", &n ,&item);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    printf("Enter the elements \n");
    for ( i = 0; i <=n; i++)
    {
        scanf("%d ",&a[i]);
    }
    for ( i = 0; i <=n; i++)
    {
        if (item==a[mid])
        {
            found =1;
            printf("%d is item found at %d pos \n",item, mid+1);
            break;
        }
        if (item < a[mid])
        {
            end = mid -1;
        }
        if(item > a[mid])
        {
            beg = mid+1;
            mid =(beg+end)/2;
        }

        
    }
    
    
}