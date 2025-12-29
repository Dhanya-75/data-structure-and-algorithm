#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char str[200];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    // Remove newline character if present
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
    // Loop through the string
    for (int i = 0; str[i] != '\0'; i++) 
    {
        // Count a word when a non-space character is followed by space or end
        if ((str[i] != ' ' && str[i] != '\t') &&
            (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')) 
        {
            count++;
        }
    }
    printf("Number of words: %d\n", count);
    return 0;
}
