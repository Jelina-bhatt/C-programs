
#include <stdio.h>

int main() {
int choice;
printf("\n select 1 for file, 2 for edit, and  3 for save");

scanf("%d",&choice);
switch (choice)
{
case 1: 
printf("\n you have choosen file menu item");
break;
case 2:
printf("\n you have choosen edit menu item");
break;
case 3:
printf("\n you have choosen save menu item");
break;
}

  
  return 0;
}