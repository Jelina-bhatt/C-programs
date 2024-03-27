#include<stdio.h>
int main(){
    system("cls");
    int marks;
    printf("enter number (0-100):");
    scanf("%d",&marks);
    if (marks<45&& marks>0)
    {
     printf("you are failed");
    }
    else if (marks>40 && marks<=60 )
    { 
       printf("you got c+");
    }
    else if ( marks >60 && marks <=70)
    {
        printf("you secured b");
    }
    else if (marks >70 && marks<=80)
    {
       printf("you secured b+ ");
    }
    else if (marks>80 && marks<=90 )
    {
        printf("you secured a");
    }
     else if (marks>90 && marks<=100 )
    {
        printf("you secured a+");
    }
    else
    {
        printf("invalid marks") ;
    }
    
    
    
}


