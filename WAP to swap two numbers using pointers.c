#include <stdio.h>

int main()
{
    int *ptr1,*ptr2,*ptr3;
    int a=5,b=4;
    ptr1=&a,ptr2=&b;
    ptr3=ptr1;
    ptr1=ptr2;
    ptr2=ptr3;
    printf("a is %d & b is %d",*ptr1,*ptr2);
    return 0;
}