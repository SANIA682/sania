#include <stdio.h>
#include <stdlib.h>

int main()
{  int num;
    printf("Enter anumber: ");
    scanf("%d", &num);

    if (num < 0)
        goto error;

    printf("You entered avalid number: %d\n", num);
    return 0;

error:
    printf("Error negative number not allowed.\n");
    return 1;
}
