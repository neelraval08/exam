#include <stdio.h>

void reverseAndSum(int arr[], int size) {
    int sum = 0;
    printf("Reversed array: ");
    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\nSum = %d\n", sum);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseAndSum(arr, size);
    return 0;
}
