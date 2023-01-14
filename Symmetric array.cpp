#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    {
	
    printf("Enter the elements of the array: ");
    
        scanf("%d", &a[i]);
    }

    int symmetric = 1;
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            symmetric = 0;
            break;
        }
    }

    if (symmetric) {
        printf("The array is symmetric.\n");
    } else {
        printf("The array is not symmetric.\n");
    }
    return 0;
}

