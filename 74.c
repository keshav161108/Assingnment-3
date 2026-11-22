#include <stdio.h>

int main() {
    // Ensure str1 has enough allocated space to hold the combined text
    char str1[100],str2[100];
    printf("Enter string one");

    fgets(str1,sizeof(str1),stdin);
    printf("Enter string two");
    fgets(str2,sizeof(str2),stdin);
    int i = 0, j = 0;

    // Step 1: Find the end of the first string (move index to the '\0' character)
    while (str1[i] != '\0') {
        i++;}
    while (str2[j] != '\0'&&str2[j]!='\n') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated String: %s\n", str1);

    return 0;
}
