#include<stdio.h>
float add(int,float);
int main(){
    int a;
    float b, sum;
    printf("enter the values of a and b");
    scanf("%d%f",&a,&b);
    sum=add(a,b);
    printf("\n the sum is %f",sum);
    return 0;
}
float add(int p,float q){
float s;
    s=p+q;
    return s;
}