#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
	
	//constructor
	Node(int value)
	{
		data=value;
		left=NULL;
		right=NULL;
	}
};

Node* insertbst(Node *root, int value)
{
	if(root==NULL)
	{
		return new Node(value);
	}
	if(value<root->data)
	{
		root->left=insertbst(root->left, value);
	}else{
		root->right=insertbst(root->right,value);
	}
}

void inorder(Node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	Node *root=NULL;
	root=insertbst(root,5);
	insertbst(root,1);
	insertbst(root,3);
	insertbst(root,4);
	insertbst(root,2);
	insertbst(root,7);
	
	inorder(root);
	cout<<endl;
}
