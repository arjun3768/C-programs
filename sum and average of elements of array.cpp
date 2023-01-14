#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float avg = (float)sum / n;
    printf("The sum of the elements of the array is: %d\n", sum);
    printf("The average of the elements of the array is: %f\n", avg);

    return 0;
}

