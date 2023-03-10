#include <stdio.h>
#include <stdlib.h>
void dupicate(int *array,int size)
{
    int counter=0;
    for(int i=0;i<size;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if (array[i]==array[j])
                counter++;
        }
    }
    printf("the number of duplicated elements = %d \n",counter);
}
int main()
{   int size ,array[14];
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("enter the elements of the  array :");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    dupicate(array,size);
    return 0;
}
