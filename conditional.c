#include <stdio.h>
#include <math.h>
int main()
{
    system("cls");
    int a, b;
    printf("enter a number a");
    scanf("%d", &a);
    printf("enter a number b");
    scanf("%d", &b);
    if (a > b)
    {
        printf("a is greater");
    }
    else if (a < b)
    {
        printf("b is greater");
    }
}