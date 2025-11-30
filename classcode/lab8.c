#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex readComplex() {
    struct Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

int main() {
    struct Complex num;

    printf("Enter a complex number:\n");
    num = readComplex();

    printf("complex number is: %.2f + %.2fi\n", num.real, num.imag);

    return 0;
}
