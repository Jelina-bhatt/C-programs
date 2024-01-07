#include<stdio.h>
#include<math.h>
int main(){
    system("cls");
    int si;
    int principal,time,rate;
    printf("enter principal, time, rate");
    scanf("%d %d %d", &principal, &time, &rate);
    si=(principal*time*rate)/100;
    printf("the value of si %d",si);
    return 0;




    


}