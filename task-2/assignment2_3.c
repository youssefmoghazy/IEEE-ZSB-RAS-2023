#include <stdio.h>
#include <stdlib.h>
int num2;// store in RAM ,scope and lifetime whole project
static int num3 ; // store in .bss or .data , scope file.c and lifetime whole project
//register not valid as a global
extern int num6;//no memory allocation , scope file.c and lifetime
int main()
{
    int num1
    printf("Hello world!\n"); //store in stack , scope and lifetime {}
    static int num4 ; // store in .bss or .data , scope {} and lifetime whole project
    register int num5 ; //store in register file or stack , scope {}
    extern int num7; //no memory allocation , scope {} and lifetime whole project
    return 0;
}
