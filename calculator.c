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

// a= value b= value;


    printf("Sum of %d and %d is %d\n",a,b,add(a,b));
    printf("Difference of %d and %d is %d\n",a,b,sub(a,b));
    printf("Product of %d and %d is %d\n",a,b,prod(a,b));
    printf("Division of %d and %d is %d\n",a,b,div(a,b));
    return 0;
}