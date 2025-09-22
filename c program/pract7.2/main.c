#include <stdio.h>
#include <stdlib.h>

   void swapreference(int *x, int *y){
    int temp;
    temp = *x;
    *x  = *y;
    *y = temp;
    printf("Inside swapreference - a: %d, y: %d\n", *x, *y);
}


int main(){
int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapreference - a: %d, b: %d\n", a, b);
    swapreference (&a, &b);
    printf("After swapreference - a: %d, b: %d\n", a, b);

        return 0;
}
