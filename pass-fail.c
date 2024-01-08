#include<stdio.h>
#include<math.h>
int main(){
    system("cls");
    int marks;
    printf("enter marks(0-100)");
    scanf("%d",&marks);
    if (marks>=30 && marks<100)
    {
        printf("you are pass\n");
    }
    else if (marks<30 && marks<=0)
    {
        printf("you are fail\n");
    }
    
else
{
    printf("wrong marks");
}
}