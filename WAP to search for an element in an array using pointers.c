#include <stdio.h>

int main()
{
    int n,*p,b,r,f=0;
    printf("enter the number of elements to input ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    p=a;
    printf("Enter the element you want to search for ");
    scanf("%d",&b);
    for(int i=0;i<n;i++){
        if((*p)==b){
            f=1,r=i;
            break;
        }
        p++;
    }
    if(f == 1){
        printf("Element found at index %d",r);
    }else{
        printf("Element not found");
    }
    return 0;
}
 