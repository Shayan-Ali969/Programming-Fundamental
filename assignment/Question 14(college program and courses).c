#include <stdio.h>

int main() {
    int program_type;
    int year;

    printf("Enter program type:\n");
    printf("1 = Computer Science\n");
    printf("2 = Electrical Engineering\n");
    printf("Choice: ");
    scanf("%d", &program_type);

    switch (program_type) {
        case 1:
            printf("\nYou selected Computer Science.\n");
            printf("Enter year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Choice: ");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("Computer Science First Year Courses:\n");
                    printf("- Introduction to Programming\n");
                    printf("- Discrete Mathematics\n");
                    printf("- Digital Logic Design\n");
                    break;
                case 2:
                    printf("Computer Science Second Year Courses:\n");
                    printf("- Data Structures and Algorithms\n");
                    printf("- Object-Oriented Programming\n");
                    printf("- Operating Systems\n");
                    break;
                default:
                    printf("Invalid year choice for Computer Science.\n");
                    break;
            }
            break;

        case 2:
            printf("\nYou selected Electrical Engineering.\n");
            printf("Enter year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Choice: ");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("Electrical Engineering First Year Courses:\n");
                    printf("- Circuit Analysis\n");
                    printf("- Engineering Physics\n");
                    printf("- Calculus I\n");
                    break;
                case 2:
                    printf("Electrical Engineering Second Year Courses:\n");
                    printf("- Electronics I\n");
                    printf("- Signals and Systems\n");
                    printf("- Electromagnetic Fields\n");
                    break;
                default:
                    printf("Invalid year choice for Electrical Engineering.\n");
                    break;
            }
            break;

        default:
            printf("Invalid program type choice.\n");
            break;
    }

    return 0;
}