#include <stdio.h>

//#define MAX_SIZE 10
int main() 
{
    int i, size, arr[10], sum = 0;   //arr[MAX_SIZE 10]

    printf("Enter the size of the array:");    //  printf("Enter the size of the array (not more than %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter %d elements: \n", size);
    for (i=0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
       sum=sum+arr[i]; //sum += arr[i];
    }

    printf("The sum of the elements is: %d\n", sum);

    return 0;
}
