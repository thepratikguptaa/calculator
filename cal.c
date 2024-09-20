#include <stdio.h>

int main() {
    int num1, num2, choice, continue_flag;

    do {
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        printf("Choose the operation to be done:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operation choice.\n");
        }

        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &continue_flag);
    } while (continue_flag == 1);

    return 0;
}
