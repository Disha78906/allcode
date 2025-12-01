#include <stdio.h>
int main() {
    int a = 5;
    int *p = &a;

    printf("value = %d\n", *p);
    printf("address = %p", p);
 return 0;
}