#include <stdio.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Replace newline if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '@';
        i++;
    }
    printf("String after replacing spaces: %s", str);
    return 0;
}
