#include<stdio.h>

int main()
{
    int *p;
    int x=10;
    p=&x;
    printf("address of x is %p\n",p);
    printf("value of x is %d\n",*p);
    printf("address of pointer variable is %p\n",&p);

    *p=20;  // CHANGING VALUE OF X BY POINTER

    printf("new value of x= %d\n",x);

    *p=x+2; // ADDING TWO ON X FROM POINTER OPERATIOn
    printf("new value of x =%d\n",x);
    return 0;



}