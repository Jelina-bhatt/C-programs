
#include <stdio.h>

int main() {
int a,b,c;
printf("enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
  {
  if(a>c)
  {
  printf("\n a is the greatest");
  }
  else
  {
  printf("\n c is the greatest");
  }
  
  }
  return 0;
}