#include "stdio.h"

int main() {
    float basicSalary, hra, da, deductions, grossSalary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    hra = 0.10 * basicSalary;
    da = 0.05 * basicSalary;
    deductions = 0.08 * basicSalary;

    grossSalary = basicSalary + hra + da - deductions;

    printf("The Gross Salary of the employee is: %.2f\n", grossSalary);

    return 0;
}
