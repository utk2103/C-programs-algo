#include <stdio.h>

void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("The array is: ");
    printArray(arr, size);

    return 0;
}
