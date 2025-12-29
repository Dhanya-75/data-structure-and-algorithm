#include <stdio.h>
int main() {
    char str[100];
    int i = 0, isDigitOnly = 1;
    printf("Enter a string: ");
    scanf("%s", str); // single word input
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9') 
        { // if not a digit
            isDigitOnly = 0;
            break;
        }
        i++;
    }
    if (isDigitOnly==1)
        printf("The string contains only digits.\n");
    else
        printf("The string contains non-digit characters.\n");
    return 0;
}
