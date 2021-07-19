#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node *head =NULL, *tail = NULL;


void Enqueue(int n){
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

int Dequeue(){
	if(head == NULL){
		tail=NULL;
		cout<<"Underflow"<<endl;
		return 0;
	}
	Node *temp= head;
	head=head->next;
	int num = temp->data;
	temp->next = NULL;
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
		cout<<"Enter your choise: \n 1. Enqueue Element: \n2.Dequeue Element \n3. PrintQueue \n";
		cin>>n;
		switch(n){
			case 1:{
				cout<<"enter data: ";
				cin>>n;
				Enqueue(n);
				break;
			}
			case 2: {
				cout<<"Dequeued: ";
				cout<<Dequeue()<<endl;
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
