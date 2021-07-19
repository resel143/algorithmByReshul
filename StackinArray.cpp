#include<bits/stdc++.h>
#define SIZE 10
using namespace std;

int arr[10]={0};
int top=-1;

int isEmpty(){
	if(top==-1) return 1;
	return 0;
}

int isFull(){
	if(top==SIZE-1) return 1;
	else return 0;
}

void Push(int n){
	if(isFull()){
		cout<<"Overflow"<<endl;
	}
	else{
		arr[++top]=n;
	}
}

int Pop(){
	int num;
	if(isEmpty())	{
		return 0;
	}else{
		num = arr[top--];
	}
	return num;
}

void print(){
	if(isEmpty()) cout<<"VOID"<<endl;
	else{
		int num= top;
		cout<<"Stack is: "<<endl;
		while(num>=0) {
			cout<<arr[num]<<endl;
			num--;
		}
	}
}

int main(){
	cout<<"Welcome to stack: "<<endl;
	int t=1,choise,n;
	while(t){
		cout<<"Enter your choise: \n1. Push()\n2. Pop()\n 3.Print() \n:";
		cin>>choise;
		switch(choise){
			case 1: {
				cout<<"Enter element: ";
				cin>>n;
				Push(n);
				break;
			}
			case 2: {
				cout<<Pop()<<endl;
				break;
			}
			case 3:{
				print();
				break;
			}
		}
		cout<<"Enter more? :";
		cin>>t;
	}
}
