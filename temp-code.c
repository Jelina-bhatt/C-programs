# include<stdio.h>
float converttemperature(float celsius);
int main(){
    float far=converttemperature(0);
    printf("far :%f", far);
    return 0;
}
float converttemperature(float celsius){
    float far= celsius*(9.0/5.0)+32;
    return far;
}