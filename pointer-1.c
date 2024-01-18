#include <stdio.h>
int main()
{
    system("cls");
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d", _age);
    return 0;
}