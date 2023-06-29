#include<bits/stdc++.h>
using namespace std;
char arr[5],max_size=4;
int top = -1;

void push(char x)
{
	if(top==max_size){
		printf("Overflow");
	}
	else
	{
		top=top+1;
		arr[top]=x;		
	}
}
void pop()
{
	if(top==-1){
		printf("\nUnderflow");
	}
	else{
		printf("%c is poped\n",arr[top]);
		top =top-1;
	}
}
void reverse(){
	for(int i=top;i>=0;i--){
		printf("%c",arr[i]);
	}
}
void display()
{
    for(int i=0;i<=top;i++){
   	printf("%c",arr[i]);
   }
}
int main()
{
	push('o');
	push('p');
	push('i');
    display();
    printf("\n");
    reverse();
    
}
