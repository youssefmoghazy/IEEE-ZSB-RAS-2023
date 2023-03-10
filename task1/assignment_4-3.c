#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringcompare(char* fir,char* sec)
{
    int flag =0;
    while(* fir!='\0'||* sec!='\0')
    {
        if(*fir==*sec)
        {
            fir++;
            sec++;
        }
        else if((*fir=='\0'&& *sec!='\0')||(*fir!='\0'&& *sec=='\0')||(*fir!=*sec))
        {
            flag =1;
            printf("Unequal strings \n");
            break;
        }
    }
    if (flag==0)
    {
        printf("Equal strings");
    }
}
int main()
{
    char string1[50] , string2[50];
    printf("Enter the first string : \n");
    gets(string1);
    printf("Enter the second string : \n");
    gets(string2);
    stringcompare(string1,string2);

    return 0;
}
