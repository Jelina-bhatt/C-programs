#include <stdio.h>
#include <stdbool.h>

// Function prototype
bool is_prime(int num);

int main() {
    int num;
    bool result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    result = is_prime(num);

    if (result) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

// Function definition
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
