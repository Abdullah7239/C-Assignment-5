#include <stdio.h>

int main()
{
    int *ptr1,*ptr2;
    int a=5,b=4;
    ptr1=&a,ptr2=&b;
    printf("The sum of two numbers is %d",*(ptr1)+*(ptr2));
    return 0;
}
