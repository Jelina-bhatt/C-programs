#include<stdio.h>

void printraadhekrishn();
void printsiyaraam();
void printlaxminarayan();

int main() {
    printf("Enter r for radhekrishn & s for siyaraam & l for laxminarayan ");
    char ch;
    scanf(" %c", &ch);  

    if (ch == 'r') {
        printraadhekrishn();
    } else if (ch == 's') {
        printsiyaraam();
    } else {
        printlaxminarayan();
    }

    return 0;
}

void printraadhekrishn() {
    printf("Raadhekrishn\n");  
}

void printsiyaraam() {
    printf("Siyaraam\n");   
}

void printlaxminarayan() {
    printf("Laxminarayan\n");   
}

