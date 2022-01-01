#include <stdio.h>

int main()
{
    char str1[20],str2[20],*p;
    printf("Enter any string ");
    gets(str1);
    p=&str1[0];
    for(int i=0;i<20;i++){
        str2[i]=(*p);
        p++;
    }
    printf("The second string is %s ",str2);
    return 0;
}