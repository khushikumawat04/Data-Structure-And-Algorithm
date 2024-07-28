#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int n){
	for(int i=0;i<(n/2);i++){
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}	
}
void Reverse_array(int arr[], int n){
    int i=0; 
    int j=n-1;
    while(i<j){
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
 }

int main(){
	int arr[] = {1,2,3,4,5,6};
	int n =6;
	cout<<"Origanal Array"<<endl;
	for(int i=0 ; i<n; i++){
		cout<<arr[i]<<" , ";
	}
	ReverseArray(arr,n);
	cout<<"Reverse Array"<<endl;
	for(int i=0 ; i<n; i++){
		cout<<arr[i]<<" , ";
	}
	
	return 0;
}
