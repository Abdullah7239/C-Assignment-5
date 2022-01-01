#include <stdio.h>

int main()
{
    int arr[3];
    int *ptr[3];
    for(int i=0;i<3;i++){
        ptr[i]=&arr[i];
    }
    printf("Enter the array ");
    for(int i=0;i<3;i++){
        scanf("%d",&(*ptr[i]));
    }
    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}