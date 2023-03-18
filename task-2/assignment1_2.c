#include <stdio.h>

int main()
{
    int x=0x123456; // an array which can test our code using it.
    int *ptr_int=&x;
    printf("%d\n",*ptr_int); // printing the value of x.
    *ptr_int++;
    printf("%d\n",*ptr_int); //(increment in pointer) state 1
    ptr_int=&x;
    ++*ptr_int;
    printf("%d\n",*ptr_int); //(increment in value of x) state 2
    ptr_int=&x;
    *++ptr_int;
    printf("%d\n",*ptr_int); //(increment in pointer) like state 1
    return 0;
}
