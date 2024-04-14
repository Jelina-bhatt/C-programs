#include<stdio.h>

int fibonacci(int);

int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
    int x, y;
    printf("Enter the number of terms in series: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        y = fibonacci(i);
        printf("Term %d of Fibonacci series = %d\n", i, y);
    }

    return 0;
}