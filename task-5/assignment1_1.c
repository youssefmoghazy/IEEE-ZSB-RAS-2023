#include <stdio.h>
#include <stdlib.h>


int main()
{

    int * ptr1 = (int*) malloc(5*sizeof(int));
    int * ptr2 = (int*) calloc(6,sizeof(int));
    if(ptr1 != NULL)
    {
        for(int i=0;i<5;i++)
        {
            ptr1[i]=i;
            printf("%d \n",ptr1[i]);
        }
    }

    else
        printf("Erorr for malloc");

    printf("***************\n");

    if(ptr2 != NULL)
    {
        for(int i=0;i<6;i++)
        {
            ptr2[i]=i;
            printf("%d \n",ptr2[i]);
        }
    }
    else
            printf("Erorr for calloc");

    printf("***************\n");

    ptr1 = (int*) realloc(ptr1,10*sizeof(int));
    if(ptr1 != NULL)
    {
        for(int i=0;i<10;i++)
        {
            ptr1[i]=i;
            printf("%d \n",ptr1[i]);
        }
    }
    else
        printf("Error for realloc");
    free(ptr1);
    free(ptr2);
    return 0;
}
