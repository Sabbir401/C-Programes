#include<bits/stdc++.h>
using namespace std;
struct node{
    char data;
   struct node *next;
};
    node *top=NULL;

void push(char x)
{
	node*temp;
	temp=new node;
	temp->data=x;
	temp->next=top;
	top=temp;
	printf("%c is pushed\n",x);
}

void pop()
{
	node*temp;
	if(top==NULL){
			printf("Empty\n");
	}
	else{
		printf("%c is popped\n",top->data);
		temp=top;
		top=top->next;
	}
}
void display()
{
   node*ptr;
   ptr=top;
   while(ptr!=NULL){
   	printf("%c ",ptr->data);
   	ptr=ptr->next;
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
}
