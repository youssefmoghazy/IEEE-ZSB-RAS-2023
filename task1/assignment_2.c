#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5,y=6,z=7;
    int *p =&x,*q=&y,*r=&z,*temp;
    printf("the value of x: %d\n",x);
    printf("the value of y: %d\n",y);
    printf("the value of z: %d\n",z);
    printf("the value of p: %p\n",p);
    printf("the value of q: %p\n",q);
    printf("the value of r: %p\n",r);
    printf("the value of *p: %d\n",*p);
    printf("the value of *q: %d\n",*q);
    printf("the value of *r: %d\n",*r);
    printf("swapping pointers.\n");
    temp=r;
    r=p;
    p=q;
    q=temp;
    printf("the value of x: %d\n",x);
    printf("the value of y: %d\n",y);
    printf("the value of z: %d\n",z);
    printf("the value of p: %p\n",p);
    printf("the value of q: %p\n",q);
    printf("the value of r: %p\n",r);
    printf("the value of *p: %d\n",*p);
    printf("the value of *q: %d\n",*q);
    printf("the value of *r: %d\n",*r);
    return 0;
}
