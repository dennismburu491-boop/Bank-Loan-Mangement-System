
#include <stdio.h>

// Function to calculate tax
float calculateTax(float grossSalary) {
    if (grossSalary < 30000) {
        return grossSalary * 0.05;
    }
    else if (grossSalary < 60000) {
        return grossSalary * 0.10;
    }
    else {
        return grossSalary * 0.15;
    }
}

int main() {
    float grossSalary, tax, netSalary;

    // Ask user to enter gross salary
    printf("Enter employee's gross salary: KSh ");
    scanf("%f", &grossSalary);

    // Call the calculateTax function
    tax = calculateTax(grossSalary);

    // Calculate net salary
    netSalary = grossSalary - tax;

    // Display results
    printf("\n===== EMPLOYEE SALARY DETAILS =====\n");
    printf("Gross Salary: KSh %.2f\n", grossSalary);
    printf("Tax Amount: KSh %.2f\n", tax);
    printf("Net Salary: KSh %.2f\n", netSalary);

    return 0;
}
