#include <stdio.h>

void find_speed(int *d, int *t, int *s) {
    *s = (*d / *t) * 3.6;
}

int main() {
    int distance, time, speed;
    printf("Enter the distance (in meters): ");
    scanf("%d", &distance);
    printf("Enter the time (hours): ");
    scanf("%d", &time);
    find_speed(&distance, &time, &speed);
    printf("Speed: %d km/hr\n", speed);
    return 0;
}

