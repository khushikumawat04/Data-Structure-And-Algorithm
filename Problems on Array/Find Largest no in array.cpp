#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int LargestNo(int arr[],int n){
	int maxelem = INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>maxelem){
			maxelem = arr[i];
		}
	}
	return maxelem;
	
}
int main(){
	int arr [] = {1,2,5,4,14};
	int n=5;
	cout<<LargestNo(arr,n);
	
	return 0;
}
