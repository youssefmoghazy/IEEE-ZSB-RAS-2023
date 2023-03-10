#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[50]="youssefmoghazy";
    for (int i=0;i<strlen(string);i++)
    {
    printf(" \"%c \",",string[i]);
    }
    return 0;
}
