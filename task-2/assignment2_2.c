#include <stdio.h>

int main()
{
    int array [10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr =&array[0];
    for(int i=0;i<10;i++)
    {
        printf ("%d\n",(*ptr+i));
    }


    return 0;
}
