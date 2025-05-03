#include <stdio.h>

int main() {
    int numbers[10];
    int i, sum = 0;
    float average;
    
    printf("Enter 10 numbers:\n");
    
    // Reading 10 numbers from the keyboard
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    average = (float)sum / 10; // Calculating the average
    
    printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);
    
    return 0;
}

