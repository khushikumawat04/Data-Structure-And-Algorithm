#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n){
	int f_max = INT_MIN;
	int s_max = INT_MIN;
	for(int i =0; i<n; i++){
		if(arr[i]>f_max){
		
			s_max = f_max;
			f_max = arr[i];
		}
		else if(arr[i]>s_max && arr[i]!=f_max){
			s_max = arr[i];
		}
		
		
		
	}
	 if(s_max == INT_MIN || f_max==s_max){
			return -1;
		}
		else {
			return s_max;
		}

			
		
	
}
int main(){
	int arr [] = {1,4,7,20,5};
	int n=5;
	cout<<secondLargest(arr,n);
	
	return 0;
	
}
