#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

Node* InsertNode(Node* root, int data){
	if(root==NULL){
		root = createNode(data);
	}else if(data<=root->data){
		root->left = InsertNode(root->left, data);
	}else root->right = InsertNode(root->right,data);
	return root;
}

bool Search(Node* root, int data){
	if(root==NULL) return false;
	else if(data<=root->data){
		return Search(root->left, data);
	}else return Search(root->right, data);
	return true;
}

int min(Node* root){
	if(root==NULL) return 0;
	while(root->left!=NULL){
		root = root->left;
	}
	return root->data;
}

int max(Node* root){
	if(root==NULL) return 0;
	while(root->right!= NULL){
		root= root->right;
	}
	return root->data;
}

int ht(Node* root){
	if(root==NULL){
		return -1;
	}
	int leftHt= ht(root->left);
	int rightHt = ht(root->right);
	if(leftHt>=rightHt) return leftHt+1;
	else return rightHt+1;
}

int main(){
		Node* root = NULL;
		InsertNode(root, 10);
		root = InsertNode(root, 12);
		root = InsertNode(root, 2);
		root = InsertNode(root, 6);
		root = InsertNode(root, 15);
		
		//finding the height of tree
		cout<<"HEIGHT: "<<ht(root)<<endl;
		
}
