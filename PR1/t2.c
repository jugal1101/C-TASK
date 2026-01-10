#include <stdio.h>

int main() {
    float basic, hra, da, other, grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    printf("Enter DA: ");
    scanf("%f", &da);

    printf("Enter Other Allowances: ");
    scanf("%f", &other);

    grossSalary = basic + hra + da + other;

    printf("\nGross Salary = %.2f\n", grossSalary);

    return 0;
}
