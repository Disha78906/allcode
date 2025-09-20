#include <stdio.h>

int main() {
    int num, i;


    printf("Enter the number to print its table: ");
    scanf("%d", &num);

    printf("multiplication table of %d:\n", num);

    // rec till 10
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

