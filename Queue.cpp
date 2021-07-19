// program for queue implemented using arrays 
#include<bits/stdc++.h>
using namespace std;
int arr[10]={0};
int rear=0, front=-1;

void Enqueue(int n){
	if(front == (rear+1)%10){
		cout<<"Overflow!!";
	}else if(front==-1) arr[++front]= n;
	else{
		rear = (rear+1)%10;
		arr[rear]=n;
		
	}
}

int Dequeue(){
	if(front==-1) return 0;
	int num = arr[front];
	if(front==9) front=-1;
	else front = (front +1)%10;
	return num;
}

void print(){
	if(front==-1) cout<<"Underflow";
	else{
		int tempf=front, tempr=rear;	
		cout<<"Queue:"<<endl;
		while(tempf!=tempr+1) {
			cout<<arr[tempf]<<endl;
			tempf=(tempf+1)%10;
		}
	}
	
	
}
int main(){
	int n,t=1;
	cout<<"Welcome to queue:\n Enter element: ";
	cin>>n;
	Enqueue(n);
	while(t){
		cout<<"Enter Next element: ";
		cin>>n;
		Enqueue(n);
		cout<<"Want to enter more? : ";
		cin>>t;
	}
	int choise=1;t=1;
	while(t){
		cout<<"1. Add Element? \n 2. Remove element \n3.Print Queue \n: ";
		cin>>choise;
		switch(choise){
			case 1: {	cout<<"Enter Next element: ";
						cin>>n;
						Enqueue(n);
						break;
					}
			case 2:{	cout<<Dequeue();
						break;
					}
			case 3: {
					print();
				break;
			}
		}
		cout<<"Want to enter more ? : ";
		cin>>t;
	}
}
