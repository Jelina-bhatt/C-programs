#include <stdio.h>
int main()
{
   int x, y;
   printf("enter values of x and y :");
   scanf("%d%d", &x, &y);
   if (x == 0 && y == 0)
   {
      printf("the point(%d,%d) lies at origin", x, y);
   }
   else if (x > 0 && y > 0)
   {
      printf("the point(%d,%d) lies at 1st quadrant", x, y);
   }
   else if (x < 0 && y > 0)
   {
      printf("the point (%d,%d) lies at 2nd quadrant", x, y);
   }
   else if (x < 0 && y < 0)
   {
      printf("the point (%d,%d) lies at 3rd quadrant", x, y);
   }
   else
   {
      printf("the point (%d,%d) lies at 4th quadrant", x, y);
   }
   return 0;
}
