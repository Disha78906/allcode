#include <stdio.h>
#include <string.h>

struct employee {
    int employee_no;
    char employee_name[100];
    int employee_age;
    char employee_gender[20];
    float employee_salary;
};

int main() {
    struct employee emp[500];
    int num, i;
    float max_salary = 0.0;
    char choice;

    printf("Enter the number of employees: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("\nDetails of Employee %d:\n", i + 1);

        printf("Enter employee number: ");
        scanf("%d", &emp[i].employee_no);

        printf("Enter employee name: ");
        scanf("%s", emp[i].employee_name);

        printf("Enter employee age: ");
        scanf("%d", &emp[i].employee_age);

        printf("Enter gender: ");
        scanf("%s", emp[i].employee_gender);

        printf("Enter salary: ");
        scanf("%f", &emp[i].employee_salary);

        if (emp[i].employee_salary > max_salary) {
            max_salary = emp[i].employee_salary;
        }
    }

    printf("\nDo you want to check the employee with the highest salary? (y/n): ");
    scanf(" %c", &choice); // space before %c to handle newline

    if (choice == 'y' || choice == 'Y') {
        printf("\n--- Employee(s) with Highest Salary (%.2f) ---\n", max_salary);
        for (i = 0; i < num; i++) {
            if (emp[i].employee_salary == max_salary) {
                printf("\nEmployee No : %d", emp[i].employee_no);
                printf("\nName        : %s", emp[i].employee_name);
                printf("\nAge         : %d", emp[i].employee_age);
                printf("\nGender      : %s", emp[i].employee_gender);
                printf("\nSalary      : %.2f\n", emp[i].employee_salary);
            }
        }
    } else {
        printf("\nExit without showing results.\n");
    }

    return 0;
}