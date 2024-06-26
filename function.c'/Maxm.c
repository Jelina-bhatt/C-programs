#include <stdio.h>

// Function to find the maximum of two numbers
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int result = max(3, 4);
    printf("Max: %d\n", result);
    return 0;
}
