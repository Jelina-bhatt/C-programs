#include <stdio.h>
int main()
{
    system("cls");
    for (int i = 5; i <= 50; i=i+2)
    {
        if (i == 37)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}