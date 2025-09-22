#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ")
    gets(str2);

    printf("Length of first string = %lu\n", strlen(str1));
    printf("Length of second string = %lu\n", strlen(str2));

    if (strcmp(str, str2) == 0)
        printf("Both strings are equal.");
    else
        printf("Strings are not equal.")

    return 0;
}
