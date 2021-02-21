#include <stdio.h>

int main()
{
    int a[10]={10,15,5,14,20,12};
    int n=25,i;
    for(i=6;i>=3;i--){
        a[i]=a[i-1];
        
    }
    a[2]=n;
    printf("Array element: \n");
    for(i=0;i<=6;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
