#include <stdio.h>
#include <stdlib.h>
typedef union
{
    struct
    {
        char *name;
        char *location;
    }shops;
    struct
    {
        int id ;
        int price ;
        int quantity ;

    }product_info;
    struct
    {
        int id;
        int products_num;
    }category;
}database1;
typedef union
{
    union
    {
        char *name;
        char *location;
    }shops;
    union
    {
        int id ;
        int price ;
        int quantity ;

    }product_info;
    union
    {
        int id;
        int products_num;
    }category;
}database2;
int main()
{
    database1 product1;
    database2 product2;
    printf("union of union = %d\n",sizeof(product1));
    printf("union of struct = %d",sizeof(product2));
    printf("n In union  all members share the same memory locations. \nSo, the size of the enum is the size of the biggest member");
    return 0;
}
