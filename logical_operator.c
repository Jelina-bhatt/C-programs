#include<stdio.h>
int main(){
int a=10,b=5,c=40;
printf("a<b && a<c =%d\n",(a<b && a<c));
printf("a>b && b<c=%d\n",(a>b && b<c));
printf("a<b || a<c =%d\n",(a<c||a<c));
printf("a>b || b<c =%d\n",(a>b||b<c));
printf("a>c || b<c =%d\n",(a>c||b>c));
return 0;
}