#include<stdio.h>
 void main()
 /*{
    int n,t,i,sum,c;
    scanf("%d",&t);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&n);
         if(n%i==0)
    {
        c++;
    }
    if(c==2)
    {
        sum +=n;
    }
    printf("%d is sum of prime number",sum);
}
    }*/

int isprime(int n){
    for(int i=2; i<=((int)(pow(n, 0.5))); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{

     
    int t;
    scanf("%d", &t);
    int inp[t];
    
    for(int i=0; i<t; i++){
        scanf("%d", &(inp[i]));
        fflush(stdin);
    }

    int sum = 0;
    for(int i=0; i<t; i++){
        for(int j=2; j<inp[i]; j++){
            if(isprime(j)){
                sum += j;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
    
    return 0;
}