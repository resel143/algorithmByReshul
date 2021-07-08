#include<bits/stdc++.h>
#define ll long long int

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* CreateNN(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

Node* Insert(Node* root, int data){

	if(root==NULL){
			root = CreateNN(data);
	}else if(data<=root->data){
		root->left = Insert(root->left, data);
	}else{
		root->right = Insert(root->right, data);
	}
	return root;
}


int main(){
	Node* root= NULL;
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 8);
	root = Insert(root, 12);
	root = Insert(root, 2);
	root = Insert(root, 9);
}
