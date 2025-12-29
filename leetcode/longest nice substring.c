#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);
    int maxLen = 0;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) 
        {
            int lower[26] = {0};
            int upper[26] = {0};
            // Check substring from i to j
            for (int k = i; k <= j; k++) 
            {
                if (islower(s[k]))
                    lower[s[k] - 'a'] = 1;
                else if (isupper(s[k]))
                    upper[s[k] - 'A'] = 1;
            }
            int ok = 1;
            for (int k = 0; k < 26; k++) 
            {
                if (lower[k] != upper[k]) 
                {
                    ok = 0;
                    break;
                }
            }
            if (ok && (j - i + 1) > maxLen) 
            {
                maxLen = j - i + 1;
                start = i;
            }
        }
    }
    // Print answer
    if (maxLen == 0) 
    {
        printf("");
    } 
    else 
    {
        for (int i = start; i < start + maxLen; i++)
            printf("%c", s[i]);
    }
    return 0;
}
