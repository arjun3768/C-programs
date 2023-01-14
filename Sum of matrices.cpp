#include <stdio.h>

int main() {
    int i, j, m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n], matrix2[m][n], sum[m][n];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the elements of the matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The sum of the matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

