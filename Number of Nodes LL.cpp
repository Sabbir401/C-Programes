#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
    node *head=NULL;

void insert(int value){
    node *ptr;
    ptr = new node;
    ptr ->data = value;
    ptr ->next = NULL;
     if(head == NULL){
        head = ptr;
     }
     else{
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next= ptr;
     }
}
void count()
{
	int x = 0;
	node* temp=head;
	while(temp!= NULL){
		x++;
		temp=temp->next;
	}
	printf("The number of nodes: %d",x);
}

void display(){
    node *temp=head;
    while(temp!= NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    insert(10);
    insert(15);
    insert(20);
    insert(35);
    insert(40);
    count();
}
