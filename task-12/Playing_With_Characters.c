#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch ,s [30],sen[100] ;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%c",&ch);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
