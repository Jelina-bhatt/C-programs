#include <stdio.h>
#include <math.h>
int main()
{
    system("cls");
    int a, b, v;
    printf("enter a number a");
    scanf("%d", &a);
    printf("enter a number b");
    scanf("%d", &b);
    v = a % b;
    printf("the value of v is =%d", v);
    return 0;
}