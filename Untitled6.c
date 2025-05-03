#include <stdio.h>

int main() {
    int n, i, number = 1, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("The first %d odd natural numbers are: ", n);
    
    for (i = 1; i <= n; i++) {
        printf("%d ", number);
        sum += number;
        number += 2;
    }
    
    printf("\n");
    printf("The sum of the first %d odd natural numbers is: %d\n", n, sum);
    
    return 0;
}

