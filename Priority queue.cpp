#include<bits/stdc++.h>
using namespace std;
char arr[20];
int max_size=19;
int front=-1;
int rear=-1;
void enqueue(char x){
	if(front==-1 && rear==-1){
		front=rear=0;
		arr[rear]=x;
		printf("%c Inserted\n",x);
		return;
	}
	else{
		int i;
		for(i=front;i<=rear;i++){
			if(x>arr[i]){
				arr[i+1]=arr[i];
				arr[i]=x;
			}
			else{
				break;
			}
		}
		arr[i+1]=x;
		rear=rear+1;
		printf("%c Inserted\n",x);
	}
}
void dequeue(){
	if(front==-1 && rear==-1){
		printf("Underflow\n");
	}
	else if(front==rear){
		printf("%c Deleted\n",arr[front]);
        front=rear=-1;
    }
	else{
		printf("%c Deleted\n",arr[front]);
		front=front+1;
}
}
void display(){
	if(front==-1 && rear==-1){
		printf("Queue is empty\n");
	}
	else{
		printf("Queue elements are: ");
	for(int i=front;i<=rear;i++){
		printf("%c ",arr[i]);
	}
}
	printf("\n");
}
int main(){
	enqueue('c');
	enqueue('a');
	enqueue('b');
	enqueue('d');
	display();	
}
