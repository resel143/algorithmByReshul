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

void deleteFromLast(int n){
	int num = 1, count = 0;
	node *temp = head;
	while(temp){
		count++;
		temp = temp->next;
	}
	
	temp = head;
	while(num < (count - n)){
		temp = temp->next;
		num++;
	}
	node *temp2 = temp->next;
	temp->next = temp->next ->next;
	temp2->next = NULL;
	delete(temp2);
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
