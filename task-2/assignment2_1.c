#include <stdio.h>
void increment (int *ptr_int )
{
    ++*ptr_int;
}
int main()
{
    int x =5;
    int *ptr=&x;
    increment(ptr);
    printf("%d",x);
    return 0;
}
