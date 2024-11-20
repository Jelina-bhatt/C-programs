#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("output.txt", "a"); // Open file for appending
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "This is appended text.\n"); // Append to file
    fclose(fptr); // Close the file

    printf("Data appended to file successfully.\n");
    return 0;
}
