#include <stdio.h>
#include <stdlib.h>

typedef unsigned char u8 ;
typedef unsigned short int u16 ;
typedef unsigned long int u32 ;
typedef signed char s8 ;
typedef signed short int s16 ;
typedef signed long int s32 ;
typedef float f32 ;
typedef double f64 ;
typedef long double f128 ;
int main()
{
    printf("%d\n",sizeof(u8));
    printf("%d\n",sizeof(u16));
    printf("%d\n",sizeof(u32));
    printf("%d\n",sizeof(s8));
    printf("%d\n",sizeof(s16));
    printf("%d\n",sizeof(s32));
    printf("%d\n",sizeof(f32));
    printf("%d\n",sizeof(f64));
    printf("%d\n",sizeof(f128));
    return 0;
}
