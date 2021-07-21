#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *right;
	Node *left;
};

Node *head = NULL;

Node* makeNode(int n){
	Node *temp = new Node();
	temp->data = n;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

Node* AddEle(Node *newNode, int n){
	if(newNode == NULL) newNode = makeNode(n);
	else{
		if(newNode->data <= n){
			head->right = AddEle(head->left, n);
		}
		else{
			head->left= AddEle(head->right, n);
		}
	}
	return newNode;
}

int search(Node* node, int n){
	if(node == NULL) return 0;
	else if(node->data == n) return 1;
	else{
		if(n<=node->data){
			search(node->left, n);
		}else{
			search(node->right, n);
		}
	}
}

int main(){
	int t=1,n;
	while(t){
		cout<<"Enter your choise? \n1. Add \n 2. Search"<<endl;
		cin>>n;
		switch(n){
			case 1: {
				cout<<"Enter element: ";
				cin>>n;
				AddEle(head, n);
				break;
			}
			case 2:{
				cout<<"Enter element to be searched: ";
				cin>>n;
				if(search(head, n) == 1) cout<<"FOUND!!"<<endl;
				else cout<<"NOFOUND"<<endl;
				break;
			}
		}
		cout<<"Want to enter more? ";
		cin>>t;
	}
}
