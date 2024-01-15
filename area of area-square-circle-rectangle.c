    #include<stdio.h>
        #include<math.h>
        float squarearea(float side);
        float circlearea(float rad);
        float rectanglearea(float a, float b);

int main()
{
float a,b;
scanf("%f %f", &a, &b);
printf("area of reactangle is %f :\n",rectanglearea(a,b));
float side;
scanf("%f",&side);
printf("area of square is %f :\n" , squarearea(side));
float rad;
scanf("%f",&rad);
printf("area of circle is %f :\n" ,circlearea(rad));
    return 0;
}

    float squarearea(float side)
    {
    return side * side;
    }
    
        float circlearea(float rad)
        {
        return 3.14 * rad * rad;
        }
        float rectanglearea(float a, float b)
        {
        return a * b;
        }
        