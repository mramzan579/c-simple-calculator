#include <stdio.h>
#include <stdlib.h>

/* Returns the sum of a and b */
double add(double a, double b)
{
    return a + b;
}

/* Returns the difference of a and b */
double subtract(double a, double b)
{
    return a - b;
}

/* Returns the product of a and b */
double multiply(double a, double b)
{
    return a * b;
}

/* Returns the quotient of a divided by b */
double divide(double a, double b)
{
    return a / b;
}

/* Prints the menu options */
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

int main(void)
{
    int    choice;
    double num1, num2, result;

    printf("\n  Welcome to the Simple C Calculator!\n");

    do {
        printMenu();
        scanf("%d", &choice);

        if (choice == 5) {
            printf("\n  Goodbye!\n\n");
            break;
        }

        printf("  Enter first  number: ");
        scanf("%lf", &num1);
        printf("  Enter second number: ");
        scanf("%lf", &num2);

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
                result = divide(num1, num2);
                printf("\n  Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                break;
            default:
                printf("  [!] Invalid option. Try again.\n");
                break;
        }

    } while (choice != 5);

    return EXIT_SUCCESS;
}