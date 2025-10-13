#include <stdio.h>
int main() {
    int num1, num2;
    int choice;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Addition is: %d", num1 + num2);
            break;
        case 2:
            printf("Subtraction is: %d", num1 - num2);
            break;
        case 3:
            printf("Multiplication is: %d", num1 * num2);
            break;
        case 4:
            printf("Division is: %.2f", (float)num1 / num2);
            break;
        case 5:
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}