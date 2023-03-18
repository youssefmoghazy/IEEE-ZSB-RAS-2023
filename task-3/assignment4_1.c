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
}database;
int main()
{
    database product;
    printf("%d",sizeof(product));
   /* product.shops.name="kermalk";
    product.shops.location="zagazig";
    product.product_info.id=2023;
    product.product_info.price=50;
    product.product_info.quantity=4;
    product.category.id=2003;
    product.category.products_num=23;*/
    printf("\nproduct.category.id = %d",sizeof(product.category.id));
    printf("\nproduct.category.products_num = %d",sizeof(product.category.products_num));
    printf("\nproduct.product_info.id = %d",sizeof(product.product_info.id));
    printf("\nproduct.product_info.price = %d",sizeof(product.product_info.price));
    printf("\nproduct.product_info.quantity = %d",sizeof(product.product_info.quantity));
    printf("\nproduct.shops.name = %d",sizeof(product.shops.name));
    printf("\nproduct.shops.location = %d",sizeof(product.shops.location));
    return 0;
}
