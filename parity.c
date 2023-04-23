#include<stdio.h>
even_parity(int count,int n,int arr[]){
    int i;
    for(i=n;i>0;i--){
            arr[i]=arr[i-1];
        }
    if(count%2 == 0 ){
        arr[0]=1;
        printf("\nAfter adding '1' at the front of the data: \n");
    }
    else{
        arr[0]=0;
        printf("\nAfter adding '0' at the front of the data: \n");
    }
    for(i=0;i<=n;i++){
            printf("%d",arr[i]);
    }
    printf("\n\n");
}

odd_parity(int count,int n,int arr[]){
    int i;
    for(i=n;i>0;i--){
            arr[i]=arr[i-1];
        }
    if(count%2 == 0 ){
        arr[0]=0;
        printf("\nAfter adding '0' at the front of the data: \n");
    }
    else{
        arr[0]=1;
        printf("\nAfter adding '1' at the front of the data: \n");
    }
    for(i=0;i<=n;i++){
            printf("%d",arr[i]);
    }
    printf("\n\n");
}

int main(){
    int i,x,n,count=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the data: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
    }
    printf("\n1.Even Parity.\n");
    printf("2.Odd Parity.\n");
    printf("Enter your choice: ");
    scanf("%d",&x);
    if(x==1){
        even_parity(count,n,arr);
    }
    else{
        odd_parity(count,n,arr);
    }
}
