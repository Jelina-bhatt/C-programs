# include<stdio.h>
int main(){
    system("cls");
    int n;
    printf("enter a number :");
    scanf("%d\n",&n);
    for (int i = 0; i <=10; i++)
    {
    if (i==6)
    {
        continue;
    }
    printf("%d\n", i*n);
    }
    return 0;
}