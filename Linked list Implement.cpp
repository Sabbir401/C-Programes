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
void insert_begin(int x)
{
    node *ptr;
    ptr=new node;
    ptr->data=x;
    ptr->next=head;
    head=ptr;
}
void insert_last(int x)
{
	node* ptr;
	ptr=new node;
	ptr->data=x;
	node* temp;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next= ptr;
	ptr->next=NULL;
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
	temp->next=ptr;
	ptr->next=hand;	
}
void del_first()
{
    node*ptr;
    ptr=head;
	head=head->next;
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
	if(n==1){
		node*ptr1;
   		ptr1=head;
		head=head->next;
		delete ptr1;
	}
    else{
    	node *ptr,*temp=head,*temp2;
    int i;
    for(i=2;i<n;i++){
        temp=temp->next;
    }
    ptr=temp->next;
    temp2=ptr->next;
    temp->next=temp2;
    delete ptr;
	}
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
	insert_last(40);
	delete_parti(2);
    display();
   
    

}
