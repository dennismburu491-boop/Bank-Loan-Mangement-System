
#include <stdio.h>

// Function to calculate electricity bill
float calculateBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    float totalBill;

    // Ask user to enter units consumed
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    // Call calculateBill function
    totalBill = calculateBill(units);

    // Display results
    printf("\n===== ELECTRICITY BILL =====\n");
    printf("Units Consumed: %d\n", units);
    printf("Total Electricity Bill: KSh %.2f\n", totalBill);

    return 0;
}
