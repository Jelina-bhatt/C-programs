#include<stdio.h>
int main(){
    system("cls");
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",i*n);
    }
}