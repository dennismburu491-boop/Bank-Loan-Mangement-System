#include <stdio.h>

/* Returns the tax amount for a given gross salary */
double calculateTax(double gross) {
    if (gross < 30000) {
        return gross * 0.05;      /* below 30,000 -> 5% */
    } else if (gross < 60000) {
        return gross * 0.10;      /* 30,000 to 59,999 -> 10% */
    } else {
        return gross * 0.15;      /* 60,000 and above -> 15% */
    }
}

int main() {
    double gross, tax, net;

    printf("Enter the employee's gross salary (KSh): ");
    if (scanf("%lf", &gross) != 1 || gross < 0) {
        printf("Invalid salary entered.\n");
        return 1;
    }

    tax = calculateTax(gross);
    net = gross - tax;

    printf("\n----- Salary Summary -----\n");
    printf("Gross Salary : KSh %.2f\n", gross);
    printf("Tax Amount   : KSh %.2f\n", tax);
    printf("Net Salary   : KSh %.2f\n", net);

    return 0;
}
