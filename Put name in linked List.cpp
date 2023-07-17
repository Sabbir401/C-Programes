#include<bits/stdc++.h>
using namespace std;
struct node{
    char *data;
   struct node *next;
};
    node *head=NULL;

void insert(char *x){
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
void search_name(char *x)
{
	int test=0;
	node*temp=head;
	while(temp!=NULL){
		if(temp->data==x){
			printf("%s is present.",x);
			test=1;
			break;
		}
		temp=temp->next;	
	}
	if(test==0)
    {
    printf("%s is Absent.",x);
	}
}
void display(){
    node *temp=head;
    while(temp!= NULL){
        printf("%s ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    insert("Tahsin");
    insert("Shahariar");
    insert("Atif");
    insert("Joni");
    display();
    search_name("Joni");
    
}
