#include <stdio.h>
#include <stdlib.h>

//returns the sum of a and b
double add(double a, double b)
{
    return a + b;
}

/* returns the difference of a and b */
double subtract(double a, double b)
{
    return a - b;
}

/* teturns the product of a and b */
double multiply(double a, double b)
{
    return a * b;
}

//returns the quotient of a divided by b
double divide(double a, double b)
{
    return a / b;
}

/* printing the menu options */
void printMenu(void)
{
  printf("\n╔══════════════════════════╗\n");
    printf("║    SIMPLE CALCULATOR     ║\n");
    printf("╠══════════════════════════╣\n");
    printf("║  1. Addition      ( + )  ║\n");
    printf("║  2. Subtraction   ( - )  ║\n");
    printf("║  3. Multiplication( * )  ║\n");
    printf("║  4. Division      ( / )  ║\n");
    printf("║  5. Exit                 ║\n");
    printf("╚══════════════════════════╝\n");
    printf("  Choose an option [1-5]: ");
}

/* reads two numbers, returns 1 on success, 0 on bad input */
int getOperands(double *a, double *b)
{
    int validA, validB;

    printf("  Enter first  number: ");
    validA = scanf("%lf", a);

    printf("  Enter second number: ");
    validB = scanf("%lf", b);

    while (getchar() != '\n');  //clear input buffer

    if (validA != 1 || validB != 1) {
        printf("  [!] Invalid input. Please enter numeric values.\n");
        return 0;
    }
    return 1;
}

int main(void)
{
    int    choice;
    double num1, num2, result;

    printf("\n  Welcome to the Simple C Calculator!\n");

    do {
        printMenu();

        /* Validate menu choice is an integer */
        if (scanf("%d", &choice) != 1) {
            printf("  [!] Please enter a number between 1 and 5.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');

        if (choice == 5) {
            printf("\n  Goodbye! Thanks for using the calculator.\n\n");
            break;
        }

        // Validate choice is in range
        if (choice < 1 || choice > 5) {
            printf("  [!] Invalid option. Please choose between 1 and 5.\n");
            continue;
        }

        //get and validate operands
        if (!getOperands(&num1, &num2)) {
            continue;
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("\n  Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("\n  Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("\n  Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                /* division-by-zero check before calling divide() */
                if (num2 == 0) {
                    printf("\n  [!] Error: Cannot divide by zero.\n");
                } else {
                    result = divide(num1, num2);
                    printf("\n  Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            default:
                printf("  [!] Unexpected error. Try again.\n");
                break;
        }

    } while (choice != 5);

    return EXIT_SUCCESS;
}