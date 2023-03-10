#include <stdio.h>
#include <stdlib.h>
void unique(int *array,int size)
{

    for(int i=0;i<size;i++)
    {
        int flag=0;
        for (int j=0;j<size;j++)
        {
            if(j==i)
                continue;
            if (array[i]==array[j])
                flag=1;
        }
        if (flag==0)
            printf("%d\t",array[i]);
    }

}
int main()
{   int size ,array[14];
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("enter the elements of the  array :\n");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    unique(array,size);
    return 0;
}
