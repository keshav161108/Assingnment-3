#include <stdio.h>

int main() {
   
    int i = 0, flag = 0;

    char str1[100]="hello college";
    char str2[100]="hello college";

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
