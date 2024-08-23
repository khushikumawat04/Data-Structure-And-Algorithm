#include <iostream>
#include <vector>
using namespace std;
// .....1st approch - time complexity -O(n) space complexity - O(n);
void rotateArray(vector<int> &arr, int n,int k){
    k = k%n;
     vector <int> temparray(n);
    for(int i=0;i<k;i++){
    	temparray[i]= arr[n-k+i];
    }
    for(int i=k; i<n;i++){
    	temparray[i] = arr[i-k];
    }
    
    for(int i=0; i<n; i++){
    	arr[i] = temparray[i];
    }	
    }
// 2nd approch ---timecomplexity-O(n) space complexity-o(1)
void reverse(vector <int> &arr, int start,int end){

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void Rotatearray(vector<int> &arr, int n, int k){
    k = k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}

    
int main(){
	vector<int> arr = {1, 2, 3, 4, 5};
	int n= arr.size();
	int k=3;
	cout<<endl<<" Before rotate"<<endl;
	for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
rotateArray(arr,n,k);
// Rotatearray(arr,n,k);
cout<<endl<<" After rotate"<<endl;
	for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}


	
}
