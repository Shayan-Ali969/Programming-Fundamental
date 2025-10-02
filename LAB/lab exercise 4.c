#include <stdio.h>

int main() {
    float cost, discount = 0.0, finalAmount, savedAmount;

    // Input shopping cost
    printf("Enter the total cost of shopping: ");
    scanf("%f", &cost);

    // Apply discount based on the cost
    if (cost >= 2000 && cost <= 4000) {
        discount = 0.20 * cost;  // 20% discount
    }
    else if (cost >= 4001 && cost <= 6000) {
        discount = 0.30 * cost;  // 30% discount
    }
    else if (cost > 6000) {
        discount = 0.50 * cost;  // 50% discount
    }
    else {
        discount = 0.0;          // No discount for cost <= 1999
    }

    // Calculate final amount after discount
    finalAmount = cost - discount;
    savedAmount = discount;

    // Print results
    printf("Actual amount: %.2f\n", cost);
    printf("Saved amount: %.2f\n", savedAmount);
    printf("Amount after discount: %.2f\n", finalAmount);

    return 0;
}
