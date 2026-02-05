#include <stdio.h>

// User Defined Functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int choice;
    int x, y;

    do {
        printf("\n--- Arithmetic Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
        }

        switch (choice) {
            case 1:
                printf("Result = %d\n", add(x, y));
                break;

            case 2:
                printf("Result = %d\n", subtract(x, y));
                break;

            case 3:
                printf("Result = %d\n", multiply(x, y));
                break;

            case 4:
                if (y == 0) {
                    printf("Division by zero is not allowed\n");
                } else {
                    printf("Result = %.2f\n", divide(x, y));
                }
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
