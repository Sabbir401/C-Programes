#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right; 
};
node* root = NULL;

void insert(node*temp,node*ptr){
		if(ptr->data>temp->data){
			if(temp->right==NULL){
				temp->right=ptr;
			}
			else{
				temp=temp->right;
				insert(temp,ptr);
			}
		}
		else{
			if(temp->left==NULL){
				temp->left=ptr;
			}
			else{
				temp=temp->left;
				insert(temp,ptr);
			}
		}
int main(){
	nt n,x=15;
    node *ptr=new node;
    ptr->data=x;
    ptr->left=NULL;
    ptr->right=NULL;
    root=ptr;
	int n;
	while(1){
		printf("\t1.Insert.\n");
		printf("\t2.Search.\n");
		printf("\t3.Inorder.\n");
		printf("\t4.Preorder.\n");
		printf("\t5.Postorder.\n");
		ptintf("\t6.Ouit. \n");
		printf("\tEnter your choice : ");
		scanf("%d", &n);
		
		if(n==1){
			int x;
			printf("Enter data: ",&x);
			node*ptr=new node;
			ptr->data=x;
			node*temp=root;
			ptr->left=NULL;
			ptr->right=NULL;
			insert(temp,ptr);
		}
		if(n==2){
			display();
		}
		if(n==3){
			remove_item();
		}
		if(n==4){
			total();
		}
		if(n==5){
			exit(1);		
		}
		if(n==6){
			exit(1);		
		}
	}
}
