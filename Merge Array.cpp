#include <stdio.h>

int main(){
	int a[3]={2,4,6}, b[3]={3,5,7},i ,j, k, merge[6];
	
	for(i=0;i<3;i++){
		merge[i]=a[i];
	}
	for(j=0;j<3;j++){
		merge[i]=b[j];
		i++;
		}
		printf("Merged array:\n");
		for(i=0;i<6;i++){
			printf("%d ",merge[i]);
		}
	return 0;
}

