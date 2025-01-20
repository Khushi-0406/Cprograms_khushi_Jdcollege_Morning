
#include <stdio.h>
void main() {
    char name[20];

    // Scanning
    printf("Enter your name: ");
    scanf("%s", name);  // Leave space for null-terminator

    // Printing
    printf("Your name is: %s\n", name);
    printf("Individual characters: ");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c ", name[i]);
    }
    
}

