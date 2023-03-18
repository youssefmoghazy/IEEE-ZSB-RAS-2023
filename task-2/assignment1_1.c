#include <stdio.h>

int main()
{
    int *ptr_int;
    char *ptr_char;
    long long *ptr_long;
    printf("%p\n",ptr_int);
    ptr_int++;
    printf("%p\n",ptr_int);
    printf("%p\n",ptr_char);
    ptr_char++;
    printf ("%p\n",ptr_char);
    printf("%p\n",ptr_long);
    ptr_long++;
    printf("%p\n",ptr_long);

    return 0;
}
