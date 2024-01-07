#include<stdio.h>
#include<conio.h>
int main(){
    int a=8,b=2,c=5;
    float d=9.2,e=10.2;
    printf("a is divided by b=%d\n",a/b);
    printf("a added to b=%d\n",a+b);;
    printf("a modulus c=%d\n",a%c);
    printf("a<b=%d\n",a,b);
    printf("a>=e is %d\n",a>=e);
printf("b less than or equal to d\n",b<=d);
printf("d<e && c>b=%d\n",(d<e)&&(c>b));
printf("e>b||c>a=%d\n",(e>b)||(c>a));
printf("not operator=%d\n",!(b==2));
return 0;
}