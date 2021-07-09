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
	else if(root->data == data) return true;
	else if(data<=root->data){
		return Search(root->left, data);
	}else return Search(root->right, data);
	return false;
}

int main(){
		Node* root = NULL;
		InsertNode(root, 10);
		root = InsertNode(root, 12);
		root = InsertNode(root, 2);
		root = InsertNode(root, 6);
		root = InsertNode(root, 15);
		cout<<"Enter data: ";
		int num;
		cin>>num;
		if(Search(root, num)) cout<<"YUPP";
		else cout<<"NOPP"<<endl;
}
