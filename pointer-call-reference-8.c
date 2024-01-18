#include <stdio.h>
void _square(int *n);
int main()
{
    system("cls");
    int n=4;
    _square(&n);
    printf("number is :%d\n",n);
    return 0;
}
// call by reference
void _square(int *n){
    *n=(*n)*(*n);
    printf("sqaure=%d\n",*n);
}