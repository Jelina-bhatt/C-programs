#include <stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter a number:");
    scanf("%d\n", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("the value of fact is=%d\n", fact);
    return 0;
}