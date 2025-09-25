#include <stdio.h>

int main() {
    float totalCalories, fatGrams, caloriesFromFat, percentFat;

    // Input
    printf("Enter total calories: ");
    scanf("%f", &totalCalories);

    printf("Enter fat grams: ");
    scanf("%f", &fatGrams);

    // Input validation
    if (totalCalories < 0 || fatGrams < 0) {
        printf("Error: Calories and fat grams cannot be negative.\n");
        return 0;
    }

    // Calculate calories from fat
    caloriesFromFat = fatGrams * 9;

    // Check if calories from fat is valid
    if (caloriesFromFat > totalCalories) {
        printf("Error: Calories from fat cannot be greater than total calories.\n");
        return 0;
    }

    // Calculate percentage of calories from fat
    percentFat = (caloriesFromFat / totalCalories) * 100;

    // Display results
    printf("Percentage of calories from fat: %.2f%%\n", percentFat);

    if (percentFat < 30) {
        printf("This food is low in fat.\n");
    }

    return 0;
}
