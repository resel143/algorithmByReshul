#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* root=NULL;

Node* makeNewNode(int n){
	Node* temp = new Node();
	temp->data = n;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

Node* insert(Node* temp, int n){
	if(root ==NULL){
		root = makeNewNode(n);
	}else if(temp == NULL) return makeNewNode(n);
	else if(n<temp->data){
		temp->left = insert(temp->left, n);
	}else{
		temp->right = insert(temp->right, n);
	}
}


Node* search(Node* temp, int n){
	if(root == NULL) return 0;
	else if(temp == NULL) return 0;
	else if(n == temp->data) return temp;
	else{
		if(n<temp->data) return search(temp->left, n);
		else return search(temp->right, n);
	}
}

void inorder(Node* temp){
	if(root == NULL) cout<<"NULL TREE!";
	else if(temp == NULL) return;
	else{
		inorder(temp->left);
		cout<<temp->data<<endl;
		inorder(temp->right);
	}
}


void preorder(Node* temp){
	if(root ==NULL) cout<<"NULL TREE!";
	else if(temp == NULL) return;
	else{
		cout<<temp->data<<endl;
		preorder(temp->left);
		preorder(temp->right);
	}
}

void postorder(Node* temp){
	if(root == NULL) cout<<"TREE NULL!";
	else if(temp ==NULL) return;
	else{
		postorder(temp->left);
		postorder(temp->right);
		cout<<temp->data<<endl;
	}
}


int main(){
	int t=1,n;
	while(t){
		
		cout<<"Enter your choise: \n1. Add \n2.Search \n3. Traversal: ";
		cin>>n;
		switch(n){
			case 1:{
				cout<<"Enter num: ";
				cin>>n;
				insert(root, n);
				break;
			}
			case 2:{
				cout<<"Enter num:";
				cin>>n;
				if(search(root, n)) cout<<"YUP\n";
				else cout<<"NUP\n";
				break;
			}
			case 3:{
				cout<<"Enter your Option: \n";
				cin>>n;
				switch(n){
					case 1: {
						inorder(root);
						break;
					}
					case 2:{
						preorder(root);
						break;
					}
					case 3: {
						postorder(root);
						break;
					}
				}
				break;
			}
		}
		cout<<"Enter more? ";
		cin>>t;
		
	}
}
