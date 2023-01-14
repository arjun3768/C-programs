#include <stdio.h>

int sum_of_elements(int *arr[], int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += *arr[i];
    }
    return sum;
}

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int *arr_ptr[size];
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        arr_ptr[i] = &arr[i];
    }
    int total = sum_of_elements(arr_ptr, size);
    printf("Sum of elements: %d\n", total);
    return 0;
}

