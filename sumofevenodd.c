#include <stdio.h>

int main() {
    int n, i, even_sum = 0, odd_sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        if (i % 2 == 0) 
        {
            even_sum += i;
        } else
         {
            odd_sum += i;
        }
    }

    printf("Sum of even numbers up to %d: %d\n", n, even_sum);
    printf("Sum of odd numbers up to %d: %d\n", n, odd_sum);

    return 0;
}
