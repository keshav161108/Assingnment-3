#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("ASCII codes representing your name:\n");
    while (name[i] != '\0' && name[i] != '\n') {
        printf("'%c' = %d\n", name[i], (int)name[i]);
        i++;
    }

    return 0;
}
