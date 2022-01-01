#include <stdio.h>

int main()
{
    int arr[3],brr[3];
    int *ptr[3];
    for(int i=0;i<3;i++){
        ptr[i]=&arr[i];
    }
    printf("Enter the array 1 ");
    for(int i=0;i<3;i++){
        scanf("%d",&(*ptr[i]));
    }
    for(int i=0;i<3;i++){
        brr[i]=*(ptr[i]);
    }printf("The 2nd array is ");
    for(int i=0;i<3;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}