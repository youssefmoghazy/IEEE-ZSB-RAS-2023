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
    int * ptr3 = (int*) malloc(50*sizeof(int));

    if(ptr2 != NULL)
    {
        for(int i=0;i<6;i++)
        {
            ptr2[i]=i+1;
            printf("%d \n",ptr2[i]);
        }
    }
    /*If you have limited memory space, allocating a bigger memory space than what
     is necessary could cause the program to fail to allocate memory or crash */
    free(ptr1);
    free(ptr2);
    free(ptr3);
    return 0;
}
