#include <stdio.h>
int main()
{
    system("cls");
    int i = 5;
    do
    {
        printf("%d\n", i);
        i = i + 2;
    } while (i <= 50);
    return 0;
}