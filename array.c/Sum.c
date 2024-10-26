#include <stdio.h>

int main() {
    int numbers[5], sum = 0;
    float average;

    // Input array elements
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate average
    average = sum / 5.0;

    // Output sum and average
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
