#include <stdio.h>

int main()
{
    int a[10]={2, 3, 4, 6, 7, 8}, b[6];
    int i,j, k;
    a[6]=5;
    for(i=0;i<6; i++){
        b[i] = a[i];
    }
    for(i=0;i<6; i++)
        {
           for(k=0;k<6;k++){        
                if(b[k]>=b[k+1]){
                   j=b[k+1];
                   b[k+1]=b[k];
                   b[k]=j;
                }  
            }
        }  
    for(i=0;i<=6;i++){
        printf("%d ",b[i]);
    }
}

