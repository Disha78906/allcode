#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    struct Employee e[100];
    int i;

    printf("Enter details of 100 employees:\n");

    for (i = 0; i < 100; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", e[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &e[i].basic);

        float DA = 0.52 * e[i].basic;  // 52% DA
        e[i].gross = e[i].basic + DA;  // gross salary
    }

    printf("\nEmployee Name and Gross Salary:\n");
    for (i = 0; i < 100; i++) {
        printf("%s ---> %.2f\n", e[i].name, e[i].gross);
    }

    return 0;
}
