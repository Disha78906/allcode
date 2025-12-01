#include <stdio.h>

void swap(int *x, int *y) {
    int num = *x;
    *x = *y;
    *y = num;
}

int main() {
    int x = 5, y = 10;

    printf("Before: x = %d, y = %d\n", x, y);
    swap(&x , &y);
    printf("After: x = %d, y = %d\n", x, y);

    return 0;
}
