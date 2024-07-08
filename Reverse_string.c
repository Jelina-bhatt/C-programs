#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; ++i) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Use fgets in modern code to avoid buffer overflow issues

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
