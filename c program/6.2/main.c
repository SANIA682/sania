#include <stdio.h>
#include <string.h>

int main()
{   char str[100], rev[100];
    int len, i, flag = 1;

    printf("Enter a string: ");
    gets(str); // or use fgets

    len = strlen(str);

    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';

    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome ");
    else
        printf("The string is not palindrome ");

    return 0;
}
