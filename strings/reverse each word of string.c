#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i, start, end;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline at the end
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';
    start = 0;
    for (i = 0; ; i++) 
    {
        if (str[i] == ' ' || str[i] == '\0') 
        { // end of a word
            end = i - 1;
            // Reverse characters from start to end
            while (start < end) 
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1; // move to next word
        }
        if (str[i] == '\0') break; // end of string
    }
    printf("String after reversing each word: %s\n", str);
    return 0;
}
