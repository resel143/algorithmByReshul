#include<bits/stdc++.h>
using namespace std;


void bubble(int arr[], int n){
	int i=0,k=0,flag = 0;
	for(int j=0;j<n;j++){
		for(i=0;i<n-k-1;i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1]= temp;
				flag = 1;
			}
		}
		if(flag == 0) break;
		k++;
	}
	
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
}


int main(){
	int arr[] = {65,25,35,10,5};
	int n = 5;
	bubble(arr, n);
}
