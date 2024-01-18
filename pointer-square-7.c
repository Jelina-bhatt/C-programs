#include <stdio.h>
void square(int n);
int main()
{
    system("cls");
    int n=4;
    square(n);
    return 0;
}
void square(int n){
    n=n*n;
    printf("sqaure=%d\n",n);
}