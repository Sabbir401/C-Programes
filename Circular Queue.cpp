#include<stdio.h>
int arr[5],max_size=4;
int front=-1;
int rear=-1;

void enqueue(int x){
	if(front==0 && rear==max_size|| front==rear+1){
		printf("Overflow\n");
		return;
	}
	else if(front==-1){
		front=0;
	}
	else if(rear==max_size && front!=0){
		rear=-1;
	}	
	rear=rear+1;
	arr[rear]=x;
	printf("%d insert\n",x);
}

void dequeue(){
	if(front==-1){
		printf("Underflow\n");
		return;
	}
	if(front==rear){
		printf("%d delete\n",arr[front]);
        front=rear=-1;      
    }
    else{
	if(front==max_size){
   		front=0;
	}
	else{
		printf("%d delete\n",arr[front]);
		front=front+1;
	}
}
}
void display(){
	if(front==-1 && rear==-1){
		printf("Queue is empty.");
	}
	for(int i=front;i<=rear;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	dequeue();
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	dequeue();
	enqueue(6);
	enqueue(7);
	dequeue();
	enqueue(8);
	enqueue(9);
}
