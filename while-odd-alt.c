#include <stdio.h>
int main()
{
    system("cls");
    int i = 5;

    while (i <= 50)
    {
        if (i % 2 == 0)
        {
            i++;
            continue;
        }

        printf("%d\n", i);
        i++;
    }
    return 0;
}