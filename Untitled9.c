#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        sum += 2 * i;
    }

    printf("Sum of the first %d terms of even natural numbers: %d\n", n, sum);

    return 0;
}

