#include<stdio.h>
// Variable Declearation
int add(int,int);
int sub(int,int);
int prod(int,int);
int div(int,int);

//Function Definations
int add ( int a, int b){
    return a+b;
}
int sub ( int a, int b){
    return a-b;
}
int prod ( int a, int b){
    return a*b;
}
int div ( int a, int b){
    return a/b;
}

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
   

    char c;
    printf("Enter the operation you want to perform: ");
    scanf(" %c",&c);

    switch(c){
        case '+':
            printf("The sum of %d and %d is %d",a,b,add(a,b));
            break;
        case '-':
            printf("The difference of %d and %d is %d",a,b,sub(a,b));
            break; 
        case '*':
            printf("The product of %d and %d is %d",a,b,prod(a,b));
            break;
        case '/':
            printf("The division of %d and %d is %d",a,b,div(a,b));
            break;
        default:
            printf("Invalid Operation");
    }

// a= value b= value;
    return 0;
}