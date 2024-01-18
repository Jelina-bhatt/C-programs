#include <stdio.h>
int main()
{
    system("cls");
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;
printf("%f\n", *ptr);
printf("%f\n",**pptr );
    
    return 0;
}