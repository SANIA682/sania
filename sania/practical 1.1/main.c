#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P,R,T,SI;

    printf("ENTER PRINCPLE AMOUNT: \n");
    scanf("%f", &P);

    printf("ENTER RATE OF INTEREST: \n");
    scanf("%f" , &R);

    printf("ENTER TOTAL INTEREST(IN YEARS): \n");
    scanf("%f" , &T);

    SI = (P*R*T) / 100;

    printf("SIMPLE INTEREST = %.2f\n",SI);


    return 0;
}
