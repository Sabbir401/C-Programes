#include<bits/stdc++.h>
using namespace std;
char arr[5],max_size=4;
int front=-1;
int rear=-1;
int box=0;
void enqueue(char x){

	if(front==-1){
		front=0;
	}
	if(rear==max_size){
		printf("Overflow\n");
	}
	else{
		rear=rear+1;
		arr[rear]=x;
		printf("%c stood in the line\n",x);
	}
}

void dequeue(){
	if(front==-1){
		printf("Underflow\n");
	}
	if(front==rear){
        front=rear=-1;
    }
	else{
		//printf("%c is got the ticket\n",arr[front]);
		char a=arr[front];
		front=front+1;
	if(a=='A'){
		printf("A is getting a ticket\n");
		box=1;
	}
}
}
int main(){
	enqueue('B');
	enqueue('C');
	dequeue();	
	enqueue('D');
	dequeue();
	enqueue('E');
	dequeue();
	if (box==0){
		printf("Sorry, we are out of tickets.\n");
	}
}
