#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c,greatest;

    printf("ENTER THREE NUMBER: \n");
    scanf("%d %d %d" , &a,&b,&c);

    greatest = (a > b && a > c )? a : ((b > c ) ? b : c );

    printf("greatest number is = %d \n" , greatest);
    return 0;
}
