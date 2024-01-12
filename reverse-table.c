#include <stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter a number :");
    scanf("%d\n", &n);
    for (int i = 10; i <= 0; i--)
    {
        printf("%d\n", i * n);
    }
    return 0;
}
