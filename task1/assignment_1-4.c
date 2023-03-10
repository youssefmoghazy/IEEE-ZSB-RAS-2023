#include <stdio.h>
#include <stdlib.h>
 void *add (int *num1,int *num2)
 {
     int sum = *num1+*num2;
    printf("the sum of the two numbers is %d",sum);
 }
int main()
{
    int num1 ,num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    add(&num1,&num2);
    return 0;
}
