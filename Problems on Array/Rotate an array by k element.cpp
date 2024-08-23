#include <iostream>
#include <vector>
using namespace std;
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
int main(){
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
	int n= arr.size();
	int k=3;
	for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
rotateArray(arr,n,k);
cout<<endl<<"after rotate";
	for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
	
	
}
