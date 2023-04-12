#include <stdio.h>
#include <stdlib.h>
#define my_sizeof(type) ((char *)(&type + 1) - (char *)(&type))
inline size_t my_sizeof_inline(type) {
    return (char *)(&type + 1) - (char *)(&type);
}

int main()
{
    int t;
    printf("%d",my_sizeof(t));
    return 0;
}
/*The main difference between using macros and inline functions is that macros are preprocessed by the compiler,
 which means that the code is replaced with the actual macro code before compilation. On the other hand,
inline functions are compiled by the compiler,which means that the code is inserted
into the compiled code at the point where the function is called*/
