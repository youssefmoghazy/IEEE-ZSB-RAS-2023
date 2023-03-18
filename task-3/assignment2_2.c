#include <stdio.h>

typedef struct info
{
   char* name;
   int age;
}info;
int main()
{
    info BUT;
    info *ptr=&BUT;
    BUT.name = "youssef";
    BUT.age=20;
    printf("%s\n",ptr->name);
    printf("%d",ptr->age);
    return 0;
}
