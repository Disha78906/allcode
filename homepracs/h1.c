#include <stdio.h>
int main() 
{
    int a = 10;
    float b = 3.14;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Value of a: %d, Address in p1: %p, Value using p1: %d\n", a, p1, *p1);
    printf("Value of b: %.2f, Address in p2: %p, Value using p2: %.2f\n", b, p2, *p2);
    printf("Value of c: %c, Address in p3: %p, Value using p3: %c\n", c, p3, *p3);

    return 0;
}
