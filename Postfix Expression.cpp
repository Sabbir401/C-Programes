#include<bits/stdc++.h>
using namespace std;

int stac[100],i;
int top=-1,max_size=8;
char arr[100]="2543*+7-*";

void push(int x){
	if(top==max_size){
		printf("Overflow\n");
	}
	else{
		top=top+1;
		stac[top]=x;
	}
}
void post_exp(){
	for(int i=0;i<9;i++){		
	if(arr[i]>='0' && arr[i]<='9'){
 		push(arr[i]-48);
 	}
	else if(arr[i]=='+'){
		int n=stac[top];
		int m=stac[top-1];
		top=top-1;
		stac[top]=m+n;
	}
	else if(arr[i]=='-'){
		int n=stac[top];
		int m=stac[top-1];
		top=top-1;
		stac[top]=m-n;
	}
	else if(arr[i]=='*'){
		int n=stac[top];
		int m=stac[top-1];
		top=top-1;
		stac[top]=m*n;
	}
	else if(arr[i]=='/'){
		int n=stac[top];
		int m=stac[top-1];
		top=top-1;
		stac[top]=m/n;
	}
	else if(arr[i]=='^'){
		int n=stac[top];
		int m=stac[top-1];
		top=top-1;
		stac[top]=m^n;
	}
	else{
		top=top+1;
		stac[top]=arr[i];
	}
}
}
void display(){
	printf("Given expression : %s\n",arr);
	printf("Result : %d",stac[top]);
}
int main(){
	post_exp();
	display();
}	

