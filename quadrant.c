#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the values of a and b:");
    scanf("%d%d", &a, &b);
    if (a > 0 && b > 0)
    {
        printf("the point(%d%d)lies on 1st quadrant", a, b);
    }
    else if (a == 0 && b == 0)
    {
        printf("the point (%d%d)lies on origin", a, b);
    }
    else if (a < 0 && b > 0)
    {
        printf("the point (%d%d) lies on 2nd quadrant", a, b);
    }
    else if (a < 0 && b < 0)
    {
        printf("the point (%d%d) lies on 3rd quadrant", a, b);
    }
    else
    {
        printf("the point (%d%d) lies on 4th quadrant", a, b);
    
    }

    return 0;
}