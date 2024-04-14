#include<stdio.h>
void update(){
    static int p=2;
    printf("%d\n",p);
    p++;
}
void main(){
    update();
    update();
    update();
    update();
}