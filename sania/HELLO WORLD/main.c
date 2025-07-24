#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d\n" , &num);

    if (num>0)
        printf("it a positive number\n");
    else
        printf("it a negative number\n");
    return 0;
}
