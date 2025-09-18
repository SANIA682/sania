#include <stdio.h>

void swapReference(int *x, int *y) (
     int temp;
     temp = *x;
     *x = *y;
     *y = temp;
     printf("Inside swapReference - x: %d, y: %d\n", *x, *y);
)

int main()
{   int a, b;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Before swapReference - a: %d, b: %d\n", a, b);
    swapReference(&a, &b);
    printf("After swapReference - a: %d, b: %d\n", a, b);
    return 0;
}
