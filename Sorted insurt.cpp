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
void sort_insert(int x){
    node *temp=head,*temp2,*ptr=new node;
    temp2=temp->next;
    int i=1;
    while(temp!=NULL){
        if(x<temp->data){
            ptr->data=x;
            ptr->next=head;
            ptr->prev=NULL;
            head->prev=ptr;
            head=ptr;
            return;
        }
        else if( (temp->data<=x) && (temp2->data>=x) ){
		ptr->data=x;
		ptr->prev=temp;
		ptr->next=temp2;
		temp->next=ptr;
		temp2->prev=ptr;
		return;
        }
        temp=temp->next;
        temp2=temp2->next;
        i++;
    }
}
void del(int x){
	node*temp=head;
	node*ptr,*temp2;
	if(head->data==x){
		ptr=head;
		head=head->next;
		head->prev=NULL;
		delete ptr;
		}
	else{
	while(temp->next!=NULL){
		if(temp->next->data==x){
		ptr=temp->next;
    	temp2=ptr->next;
    	temp->next=temp2;
    	temp2->prev=temp;
    	delete ptr;	
		}
	temp=temp->next;
	}	
}
}
void del_head(){
    node*ptr;
    ptr=head;
	head=head->next;
	head->prev=NULL;
	delete ptr;
}
void display(){
    node *temp=head;
    while(temp!= NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
    sort_insert(25);
    display();
    del(10);
    display();
    sort_insert(5);
    display();
    sort_insert(35);
    display();
    del_head();
    display();
}
