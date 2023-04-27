#include<bits/stdc++.h>
using namespace std;

int main(){
	int G[6][6];
	int i,j,max=5;
	for(i=1;i<=max;i++){
		for(j=1;j<=max;j++){
			G[i][j]=0;
		}
	}
	int e;
	printf("Enter the number of edge: ");
	scanf("%d",&e);
	for(i=1;i<=e;i++){
		int a, b;
		scanf("%d %d",&a,&b);
		G[a][b]=1;
		G[b][a]=1;
	}
	for(i=1;i<=max;i++){
		for(j=1;j<=max;j++){
			printf("%d",G[i][j]);
		}
		printf("\n");
	}
}
