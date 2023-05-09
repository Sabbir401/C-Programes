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
		printf("%c is pushed\n",x);
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
void display()
{
    for(int i=0;i<=top;i++){
   	printf("%c ",arr[i]);
   }
}
int main()
{
	push('a');
	push('b');
	push('c');
    display();
    printf("\n");
    pop();
    pop();
    display();
    printf("\n");
    pop();
    pop();
    display();
    printf("\n");
    push('d');
    display();
}
