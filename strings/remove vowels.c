#include <stdio.h>
int main() 
{
    char str[200];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char result[200]; // string without vowels
    for (i = 0; str[i] != '\0'; i++) 
    {
        // Check if current character is a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') 
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0'; // terminate string
    printf("String after removing vowels: %s", result);
    return 0;
}
