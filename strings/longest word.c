#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline if present
    int len = strlen(str);
    if (str[len - 1] == '\n')
       str[len - 1] = '\0';
    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;
    for (int i = 0; ; i++) 
    {
        if (str[i] != ' ' && str[i] != '\0') 
        {
            currLen++;
        } 
        else 
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        }
        if (str[i] == '\0') break;
    }
    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
