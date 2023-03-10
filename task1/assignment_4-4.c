#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[20]="youssefmohazy";
    char s2[20];
    for(int i=0;i<strlen(s1);i++)
    {
        s2[i]=s1[i];
    }
    printf("%s",s2);
    return 0;
}
