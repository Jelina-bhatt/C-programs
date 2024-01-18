#include <stdio.h>
int main()
{
    system("cls");
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d\n", **pptr);

    return 0;
}