
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
