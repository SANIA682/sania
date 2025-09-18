#include <stdio.h>
#include <stdlib.h>


 void swapValue (int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapValue - a: %d, b: %d\n", a, b);
 }

    int main(){
        int a, b;
        printf("Enter two number: ");
        scanf("%d %d", &a, &b);

        printf("Before swapValue - a: %d, b: %d\n", a, b);
        swapValue(a, b);
        printf("After swapValue - a: %d, b: %d\n", a, b);

    return 0;
}
