#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
    // Manually remove the trailing newline character if it exists
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; // Reduce length to account for the removed newline
    }

    // Bubble sort logic to arrange characters in dictionary order
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                // Swap characters
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Characters in dictionary order: %s\n", str);
    return 0;
}
