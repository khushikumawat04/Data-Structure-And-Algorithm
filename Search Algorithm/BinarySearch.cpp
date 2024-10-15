#include <iostream>
#include <cmath>
using namespace std;
int BinarySearch(int arr[], int size, int target){
int start = 0;
int end  = size-1;
while(start<=end){
	int mid  = (start+end)/2;
	if(target==arr[mid]){
		return mid;
	}
	else if(target<arr[mid]){
		end = mid-1;
	}
	else{
		start = mid+1;
	}
}
return -1;

}
int main(){
	int arr[] = {1,4,6,7,8,9,20,24,25};
	int size = sizeof(arr)/sizeof(arr[0]);
	int target = 24;
	int result = BinarySearch(arr,size,target);
	if(result!=-1){
		cout<<"Element found at "<<result;
	}
	else{
		cout<<"Element not found";
	}
	return 0;
}
