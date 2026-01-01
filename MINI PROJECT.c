#include <stdio.h>      //Title- Bitwise Utility Tool, Topic name- Bitwise ops

int main()              //Aishwarya Sharma, ERP-10122
{
    int a, b, choice, result;

    
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    
    printf("\n----- Bitwise Utility Tool -----\n");
    printf("1. Bitwise AND (&)\n");
    printf("2. Bitwise OR (|)\n");
    printf("3. Bitwise XOR (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    
    switch(choice)
    {
        case 1:
            result = a & b;
            printf("Result of %d & %d = %d\n", a, b, result);
            break;

        case 2:
            result = a | b;
            printf("Result of %d | %d = %d\n", a, b, result);
            break;

        case 3:
            result = a ^ b;
            printf("Result of %d ^ %d = %d\n", a, b, result);
            break;

        case 4:
            result = a << b;
            printf("Result of %d << %d = %d\n", a, b, result);
            break;

        case 5:
            result = a >> b;
            printf("Result of %d >> %d = %d\n", a, b, result);
            break;

        default:
            printf("Invalid choice! Please select between 1 to 5.\n");
    }

    return 0;
}
//Output
// Enter first integer: 5
// Enter second integer: 3

// ----- Bitwise Utility Tool -----
// 1. Bitwise AND (&)
// 2. Bitwise OR (|)
// 3. Bitwise XOR (^)
// 4. Left Shift (<<)
// 5. Right Shift (>>)
// Enter your choice: 1
// Result of 5 & 3 = 1

