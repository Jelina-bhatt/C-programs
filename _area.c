#include <stdio.h>
#include<math.h>
int main()
{
    float height,base, area;
    printf("enter height of triangle :");
    scanf("%f", &height);
    printf("enter base of triangle :");
    scanf("%f", &base);
    area=0.5*height*base;
    printf("the area of triangle is %f", area);
    return 0;
}