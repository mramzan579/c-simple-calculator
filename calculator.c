#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double num1, num2;

    printf("\n  Welcome to the Simple C Calculator!\n");

    printf("  Enter first  number: ");
    scanf("%lf", &num1);

    printf("  Enter second number: ");
    scanf("%lf", &num2);

    printf("\n  You entered: %.2f and %.2f\n", num1, num2);

    return EXIT_SUCCESS;
}