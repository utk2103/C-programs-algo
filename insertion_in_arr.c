#include<stdio.h>

int main(){
    int n,i,num,k,a[10];
    //enter no of elements
    scanf("%d",&n);
    for(i=0;i < n;i++){
        scanf("%d",a[i]);
    }
    scanf("%d %d",&k, &num);
    for(i=n-1;i>k;i--){
        a[i+1] = a[i];
    }
    a[k] = num; //copy element
    for(i=0;i < n;i++){
        printf("%d",a[i]);
    }
}