#include<bits/stdc++.h>


using namespace std;


typedef struct Node{
	int data;
	struct Node *next;
}node;

node *head = NULL;

void addLL(int n){
		
		node *temp = (node *)malloc(sizeof(node));
		temp->data = n;
		temp->next = NULL;
	
	if(head == NULL){
		head = temp;
	}else{
		node *temp2 = head;
		while(temp2->next){
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
}

void printLL(){
	node *temp = head;
	while(temp){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}

void reverseLL(){
	node *prev = NULL, *curr = head, *next;
	if(!head || !head->next) cout<<"Linked list cannot be reversed!!";
	else{
		while(curr){
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head = prev;
	}
}

int main(){
	
	addLL(1);
	addLL(2);
	addLL(3);
	addLL(4);
	addLL(5);
	addLL(6);
	addLL(7);
	
//	printLL();
	reverseLL();
	
//	printLL();
	
	deleteFromLast(3);
	printLL();
	
}
