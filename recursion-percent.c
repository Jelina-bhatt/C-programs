#include <stdio.h>

int calcpercentage(int science, int math, int sanskrit);

int main()
{
    int science = 98;
    int math = 95;
    int sanskrit = 99;

    int percentage = calcpercentage(science, math, sanskrit);

    printf("percentage is: %d\n", percentage);

    return 0;
}

int calcpercentage(int science, int math, int sanskrit)
{
    int total_marks = science + math + sanskrit;
    int percentage = (total_marks / 3);

    return percentage;
}