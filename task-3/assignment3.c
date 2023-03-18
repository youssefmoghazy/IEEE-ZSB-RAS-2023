#include <stdio.h>

typedef struct
{
    char *name;
    int id;
    char class_id;
}test1;
typedef struct
{
    int id;
    char *name;
    char class_id;
}test2;
int main()
{
    test1 you;
    test2 ssef;
    printf("%d\n",sizeof(you));
    printf("%d",sizeof(ssef));
    printf("\n\"arranging the structure members can affect its size.\nThe general rule states that always arrange the members in ascending order or\ndescending order to get the lowest size.\"");

    return 0;
}
