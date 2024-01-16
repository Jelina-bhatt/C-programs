    #include<stdio.h>
        
int main()
{
system ("cls");
int day;
printf("enter day (1-7) :");
scanf("%d", &day);
switch (day){
case 1: printf("monday\n");
break;
case 2: printf("Tuesday\n");
break;
case 3: printf("Wednesday\n");
break;
case 4: printf("Thursday\n");
break;
case 5: printf("Friday\n");
break;
case 6: printf("Saturday\n");
break;
case 7: printf("sunday\n");
break;
default: printf("not a valid day\n");
}
    return 0;
}

    