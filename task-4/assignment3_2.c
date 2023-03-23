#include <stdio.h>
#include <stdlib.h>
int ADD(int x , int y)
{
    return (x+y);
}
int SUBTRACT(int x , int y)
{
    return (x-y);
}
int main()
{
    int operand1,operand2,choice,result;

    printf("Enter first operand: ");
    scanf("%d", &operand1);
    printf("Enter second operand: ");
    scanf("%d", &operand2);
    printf("Enter your choice:\n");
    printf("1. Add two integers\n");
    printf("2. Subtract two integers\n");
    scanf("%d",&choice);

     switch(choice) {
        case 1:
            result = ADD(operand1,operand2);
            printf("%d + %d = %d\n", operand1,operand2, result);
            break;
        case 2:
            result = SUBTRACT(operand1,operand2);
            printf("%d - %d = %d\n", operand1,operand2, result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

