#include <stdio.h>

int main() {
    // Declare an array of integers with size 5
    int arr[5];

    // Initialize the array with values
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Print the values of the array
    printf("Array elements are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    // Modify an element in the array
    arr[2] = 35;

    // Print the modified array
    printf("\nModified array elements are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
