#include<stdio.h>
int add(int,int);
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
  printf("addition of %d and %d is %d",a,b,add(a,b));
}
int add(int a,int b){
    return a+b;
}