#include<stdio.h>
void swapp(int*,int*);
void main(){
    int a=14,b=16;
    printf("enter the values before swapp a=%d and b=%d",a,b);
    swapp(&a,&b);
    printf("\n the values after swapp a=%d and b=%d",a,b);

}
void swapp(int*a,int*b){
    int c;
    c=*a;
    *a=*b;
    *b=c;


}