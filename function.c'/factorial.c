
#include <stdio.h>
#include <stdlib.h>

int fact(int);
int main() {
    int n, f;
    printf("Enter the number: ");
    scanf("%d", &n);
    f = fact(n);
    printf("The factorial is %d\n", f);
  
    return 0;
}

int fact(int k) {
    if (k == 1) {
        return 1;
    } else {
        return (k * fact(k - 1));
    }
}