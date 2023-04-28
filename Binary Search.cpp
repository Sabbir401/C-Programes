#include<bits/stdc++.h>
using namespace std;

char arr[11]={'A','B','C','D','E','F','G','H','I','J','K'};
int flag, max_size=10;
int low=0;
int high=max_size;

void search(char x){
flag=0;
while(low<=high){
	
	int mid=(low+high)/2;
	if(arr[mid]==x){
		flag=1;
		printf("%c is found\n",arr[mid]);
		break;
	}
	else if(arr[mid]>x){
		high=mid-1;
	}
	else if(arr[mid]<x){
		low=mid+1;
	}
}
    if(flag==0){
    	printf("%c is not found\n",x);
	}
}
int main(){	
	search('A');
}
