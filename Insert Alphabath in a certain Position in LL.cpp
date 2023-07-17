#include<bits/stdc++.h>
using namespace std;
struct node{
    char data;
   struct node *next;
};
    node *head=NULL;

void insert(char x){
    node *ptr;
    ptr = new node;
    ptr->data = x;
    ptr->next = NULL;
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
void insert_middle(char x, int n){
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
void display(){
    node *temp=head;
    while(temp!= NULL){
        printf("%c ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    insert('A');
    insert('B');
    insert('D');
    insert('E');
    display();
    printf("\n");
    insert_middle('C',2);
	display();
}
