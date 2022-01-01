#include <stdio.h>

int main()
{
    int *p1,*p2;
    int arr[3],brr[3];
    for(int i=0;i<3;i++){
        printf("Enter Element %d in Array 1 ",i);
        scanf("%d",&arr[i]);
        printf("Enter Element %d in Array 2 ",i);
        scanf("%d",&brr[i]);
    }
    p1=arr;
    p2=brr;
    for(int i=0;i<3;i++){
        *p1=*p1+*p2;
        *p2=*p1-*p2;
        *p1=*p1-*p2;
        p1++;
        p2++;
    }
    printf("Array 1 is ");
    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    printf("\nArray 2 is ");
    for(int i=0;i<3;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}