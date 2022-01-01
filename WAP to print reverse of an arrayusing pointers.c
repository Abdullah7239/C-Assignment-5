#include <stdio.h>

int main()
{
    int n,*p;
    printf("enter the number of elements to input ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array ");
    for(p=a;p<a+n;p++){
        scanf("%d",p);
    }
    printf("The array in reverse order is ");
    for(p=a+n-1;p>=a;p--){
        printf("%d ",*p);
    }
    return 0;
} 