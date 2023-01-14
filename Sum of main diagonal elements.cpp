#include <stdio.h>
int main() {
	int n;
    int a[][N], i, j, sum = 0;

    printf("Enter the elements of the matrix: \n");
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of the main diagonal elements: %d", sum);

    return 0;
}

