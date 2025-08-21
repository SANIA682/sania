#include <stdio.h>
#include <stdlib.h>

int main()
{   int choice;
    float a, b;

    printf("Menu\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Division\n");
    printf("ENTER your choice (1-4): ");
    scanf("%d", &choice);

    printf("ENTER two number: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1:
            printf("Result = %.2f", a + b);
            break;
        case 2:
              printf("Result = %.2f", a - b);
              break;
        case 3:
              printf("Result = %.2f", a * b);
              break;
        case 4:
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Enter Division by zero!");
            break;
        default:
            printf("Invalid choice.");
    }

    return 0;
}
