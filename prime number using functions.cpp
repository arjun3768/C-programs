#include <stdio.h>

int prime(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (prime(num)) {
        printf("The number is prime.\n");
    }
    else {
        printf("The number is not prime.\n");
    }
    return 0;
}

