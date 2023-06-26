#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *left;
    node *right;
};
node *root=NULL;
struct node *insert(node *temp,node *ptr){

    if(ptr->data>temp->data){
        if(temp->right==NULL){
            temp->right=ptr;
        }
        else{
            temp=temp->right;
            insert(temp,ptr);
        }

    }
        else if(ptr->data<temp->data){
        if(temp->left==NULL){
            temp->left=ptr;
        }
        else{
            temp=temp->left;
            insert(temp,ptr);
        }
        }
}

void inorder(node *temp){
	if(temp->left!=NULL)
	inorder(temp->left);
	printf("%d ",temp->data);
	if (temp->right!=NULL)
	inorder(temp->right);
}

void preorder(node*temp){
	printf("%d ",temp->data);
	if(temp->left!=NULL)
	preorder(temp->left);
	if (temp->right!=NULL)
	preorder(temp->right);
}

void postorder(node*temp){
	if (temp->left!=NULL)
	postorder(temp->left);
	if(temp->right!=NULL)
	postorder(temp->right);
	printf("%d ",temp->data);
}

void search(node*temp,int x){
	if(temp->data==x){
	printf("\t\t\t%d is found.\n",x);
	return;	
	}
	else{
		if(temp->data<x){
			temp=temp->right;
			search(temp,x);
		}
		else{
		temp=temp->left;
		search(temp,x);
		}
	}
}
int main()
{
    int n,x=23;
    node *ptr=new node;
    ptr->data=x;
    ptr->left=NULL;
    ptr->right=NULL;
    root=ptr;

 while(1){
		printf("\n\t1.Insert.\n");
		printf("\t2.Inorder.\n");
		printf("\t3.Preorder.\n");
		printf("\t4.Postorder.\n");
		printf("\t5.Search.\n");
		printf("\tEnter your choice : ");
		scanf("%d", &n);
		
		if(n==1){
		for(int i=0;i<4;i++){	
		printf("\t\tEnter value: ");
        int val;
        scanf("%d",&val);
        node *temp=root;
        ptr=new node;
        ptr->data=val;
        ptr->left=NULL;
        ptr->right=NULL;
        insert(temp,ptr);
		}
	}
		if(n==2){
			node*temp=root;
			printf("\t\t\t");
			inorder(temp);
		}
		if(n==3){
			node*temp=root;
			printf("\t\t\t");
			preorder(temp);
		}
		if(n==4){
			node*temp=root;
			printf("\t\t\t");
			postorder(temp);
		}
		if(n==5){
			int x;
			printf("Enter data you want to find: ");
			scanf("%d",&x);
			node*temp=root;
			search(temp,x);			
	}
}
}

  
