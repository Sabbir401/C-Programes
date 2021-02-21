#include <stdio.h>

main()
{
    int a[3]={2, 4, 6}, b[3]={3, 5, 7}, merge[6];
    int i, j, k;

    for(i=0;i<3; i++)
        {
            merge[i] = a[i];
         }
     for(j=0;j<3; j++)
        {
            merge[i] = b[j];
            i++; 
        }

   for(i=0;i<6; i++)
        {
           for(k=0;k<5;k++)
             {        
                if(merge[k]>=merge[k+1])
                 {
                   j=merge[k+1];
                   merge[k+1]=merge[k];
                   merge[k]=j;
                 }  
              }
         }                      

     printf("The merged and sorted array is :\n");
    for(i=0; i<6; i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}
