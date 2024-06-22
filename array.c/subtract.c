#include <stdio.h>

// Function prototypes
void sub(int[], int);
void sort_array(int[], int);
void display(int[], int);

int main() {
    int ar[5];
    int n;
    printf("Enter the five elements: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ar[i]);
    }
    sub(ar, 5);
    sort_array(ar, 5);
    display(ar, 5);
    return 0;
}

void sub(int ar[], int n) {
    for (int i = 0; i < n; i++) {
        ar[i] -= 4;
    }
}

void sort_array(int ar[], int n) {
    int temp;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n  - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
}

void display(int ar[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" the sorted array is %d\n", ar[i]);
    }
}