#include <stdio.h>

int main()
{
    char str1[20],str2[20],str3[40],*p1,*p2;
    printf("Enter string 1 ");
    gets(str1);
    printf("Enter string 2 ");
    gets(str2);
    p1=str1;
    p2=str2;
    while(*p1){
        p1++;
    }
    while(*p2){
        *p1 = *p2;
        p2++;
        p1++;
    }
    *p1='\0';
    printf("the concatinated string is %s",str1);
    return 0;
    
}