#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node *head =NULL, *tail = NULL;


void Push(int n){
	Node *temp= new Node();
	temp->data= n;
	temp->next= NULL;
	
	if(head==NULL){
		head = temp;
		tail=temp;
	}
	else{
		tail->next=temp;
		tail= temp;
	}
}

int Remove(){
	if(head == NULL){
		tail=NULL;
		return 0;
	}
	Node* temp= head;
	while(temp->next->next!=NULL){
		temp= temp->next;
	}
	int num = tail->data;
	temp->next = NULL;
	tail= temp;
	return num;
}

void Print(){
	Node *temp= head;
	cout<<"LL:"<<endl;
	while(temp){
		cout<<temp->data<<endl;
		temp= temp->next;
	}
}


int main(){
	cout<<"Welcome to LL: ";
	int t=1,n;
	while(t){
		cout<<"Enter your choise: \n 1. Push Element: \n2.Pop Element \n3. PrintLL \n";
		cin>>n;
		switch(n){
			case 1:{
				cout<<"enter data: ";
				cin>>n;
				Push(n);
				break;
			}
			case 2: {
				cout<<"Pop(): ";
				cout<<Remove()<<endl;
				break;
			}
			case 3: {
				Print();
				break;
			}
		}
		cout<<"enter more? ";
		cin>>t;
		
	}
}
