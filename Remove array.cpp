#include <stdio.h>

int main()
{
    int a[10]={10,15,25,5,14,20,12};
    int i;
    for(i=5;i<=6;i++){
        a[i-1]=a[i];
    }
    printf("New array: \n");
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

