#include <stdio.h>

int main(){
    char str[20],*p;
    int len=0;
    printf("Enter any string ");
    gets(str);
    p = &str[0];
    while(*p != '\0'){
        len++;
        p++;
    }
    printf("%d",len);
    return 0;
}