#include <iostream>
#include <cmath>
using namespace std;
int Jumpsearch(int arr[], int size, int target){
	int prev = 0;
	int jump = sqrt(size);
	while(jump<size && arr[jump]<=target){
		prev = jump;
		jump += sqrt(size);
		if(prev>=size){
			return -1;
		}
	}
	for(int i=prev;i<jump;i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1,4,6,7,8,9,20,24,25};
	int size = sizeof(arr)/sizeof(arr[0]);
	int target = 25;
	int result = Jumpsearch(arr,size,target);
	if(result!=-1){
		cout<<"Element found at "<<result;
	}
	else{
		cout<<"Element not found";
	}
	return 0;
}
