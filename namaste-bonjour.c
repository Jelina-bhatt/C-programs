#include <stdio.h>
void namaste();
void bonjour();
int main()
{
    printf("enter f for french & n for nepali :");
    char ch;
    scanf("%c", &ch);
    if (ch == 'n')
    {
        namaste();
    }
    else
    {

        bonjour();
    }
    return 0;
}
void namaste()
{
    printf("namaste\n");
    
}
void bonjour()
{
    printf("bonjour\n");
}