#include <stdio.h>
int main()
{
    system("cls");
    for (int i = 1; i <= 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}