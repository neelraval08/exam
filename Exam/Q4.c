#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5};
    int *ptr = arr;
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Cubes of array elements:\n");
    for(int i = 0; i < size; i++) {
        printf("%d^3 = %d\n", *(ptr + i), (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}
