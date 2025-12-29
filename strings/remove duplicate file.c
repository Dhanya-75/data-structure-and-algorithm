#include <stdio.h>
#include <string.h>
int main() {
    char str[100], result[100];
    int i, j, k;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    k = 0; // index for result string
    for (i = 0; i < len; i++) 
    {
        int flag = 0;
        // Check if str[i] already exists in result
        for (j = 0; j < k; j++) 
        {
            if (str[i] == result[j])
            {
                flag = 1;
                break;
            }
        }
        // If not found in result, add it
        if (flag == 0) {
            result[k] = str[i];
            k++;
        }
    }
    result[k] = '\0'; // terminate string
    printf("String after removing duplicates: %s\n", result);
    return 0;
}
