#include <stdio.h>
#include <stdlib.h>

/* returns the sum of a and b */
double add(double a, double b)
{
    return a + b;
}

// returns the difference of a and b
double subtract(double a, double b)
{
    return a - b;
}

/* Returns the product of a and b */
double multiply(double a, double b)
{
    return a * b;
}

/* returns the quotient of a divided by b */
double divide(double a, double b)
{
    return a / b;
}

int main(void)
{
    double num1, num2;

    printf("\n  Welcome to the Simple C Calculator!\n");

    printf("  Enter first  number: ");
    scanf("%lf", &num1);

    printf("  Enter second number: ");
    scanf("%lf", &num2);

    printf("\n  Sum      : %.2f\n", add(num1, num2));
    printf("  Subtract : %.2f\n", subtract(num1, num2));
    printf("  Multiply : %.2f\n", multiply(num1, num2));
    printf("  Divide   : %.2f\n", divide(num1, num2));

    return EXIT_SUCCESS;
}