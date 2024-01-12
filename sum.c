#include<stdio.h>
int main(){
    system("cls");
    int sum=0;
    for (int i = 5; i <= 50; i++)
    {
        sum=i+sum;
       
    }
    printf("the sum =%d", sum);
    
}