#include <stdio.h>

int main() {
    int num1, num2, sum, difference, product, quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, difference);
    printf("%d * %d = %d\n", num1, num2, product);
    printf("%d / %d = %d\n", num1, num2, quotient);

    return 0;
}
