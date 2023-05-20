#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
   struct node *next;
   struct node *prev;
};
    node *head=NULL;
    
void insert(int x){
    node *ptr;
    ptr = new node;
    ptr ->data = x;
    ptr ->prev = NULL;
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

void insert_begin(int x){
	node*ptr;
	ptr=new node;
	ptr->data=x;
	ptr->next=head;
	head->prev =ptr;
	ptr->prev=NULL;
	head=ptr;
}
void insert_last(int x){
	node*ptr;
	ptr=new node;
	ptr->data=x;
	ptr->next= NULL;
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=ptr;
	ptr->prev=temp;
}
void del_first()
{
    node*ptr;
    ptr=head;
	head=head->next;
	head->prev=NULL;
	delete ptr;
}

void del_last(){
	node * ptr;	
	node* temp;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	temp->next=ptr;
	delete ptr;
	temp->next=NULL;	     
}
void delete_parti(int n){
    node *ptr,*temp=head,*temp2;
    int i;
    for(i=1;i<n-1;i++){
        temp=temp->next;
    }
    ptr=temp->next;
    temp2=ptr->next;
    temp->next=temp2;
    temp2->prev=temp;
    delete ptr;
}
void insert_middle(int x, int n){
	node*ptr;
	ptr=new node;
	ptr->data=x;
	node*temp =head;
	int i;
	for(i=1;i<n;i++){
		temp=temp->next;
	}
	node* hand=temp->next;
	ptr->prev=temp;
	temp->next=ptr;
	ptr->next=hand;	
	hand->prev=ptr;
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
    insert(15);
    insert(20);
    insert(25);
    del_first();
    insert_begin(5);
    display();

}
