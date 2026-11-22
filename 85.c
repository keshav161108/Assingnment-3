#include <stdio.h>

int main() {
    char str[100], oldChar, newChar;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Clean newline manually without strcspn
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter character to be replaced: ");
    scanf(" %c", &oldChar);

    printf("Enter new character: ");
    scanf(" %c", &newChar);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }

    printf("Updated string: %s\n", str);
    return 0;
}
