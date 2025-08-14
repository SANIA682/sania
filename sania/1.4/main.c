#include <stdio.h>
#include <stdlib.h>

int main()
{    int num, rev = 0, rem;

    printf("enter a numbers: ");
    scanf("%d", &num);

    while (num !=0){
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
    }

    printf("reversed numbers = %d", rev);

    return 0;

}
