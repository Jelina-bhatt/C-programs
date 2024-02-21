#include <stdio.h>
int main()
{
    int b;
    printf("enter a non-zero number:");
    scanf("%d", &b);
    if (b % 2 == 0)
        printf("\n the number is even", b);
    else
        printf("\n the number is odd", b);
    return 0;
}