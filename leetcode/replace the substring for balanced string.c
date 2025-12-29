#include <stdio.h>
#include <string.h>
int main() {
    char s[100005];
    scanf("%s", s);
    int n = strlen(s);
    int q = 0, w = 0, e = 0, r = 0;
    // Count frequency of each character
    for (int i = 0; i < n; i++) 
    {
        if (s[i] == 'Q') q++;
        else if (s[i] == 'W') w++;
        else if (s[i] == 'E') e++;
        else if (s[i] == 'R') r++;
    }
    int need = n / 4;
    // If already balanced
    if (q == need && w == need && e == need && r == need)
    {
        printf("0\n");
        return 0;
    }
    int minLen = n;
    // Try all substrings
    for (int i = 0; i < n; i++)
    {
        int cq = q, cw = w, ce = e, cr = r;
        for (int j = i; j < n; j++) 
        {
            // Remove characters from count
            if (s[j] == 'Q') cq--;
            else if (s[j] == 'W') cw--;
            else if (s[j] == 'E') ce--;
            else if (s[j] == 'R') cr--;
            // Check if remaining string is balanced
            if (cq <= need && cw <= need && ce <= need && cr <= need)
            {
                int len = j - i + 1;
                if (len < minLen)
                    minLen = len;
                break;
            }
        }
    }
    printf("%d\n", minLen);
    return 0;
}
