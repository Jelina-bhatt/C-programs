#include <stdio.h>
int main()
{
    system("cls");
    int age = 22;
    int *ptr = &age;
    int _ptr = *ptr;
    // adress
    printf("%p\n", &age);
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);
    return 0;
}