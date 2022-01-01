#include <stdio.h>

int main(){
    int *ptr, a=1;
    ptr=&a;
    printf("a is %d",(*ptr));
    return 0;
}