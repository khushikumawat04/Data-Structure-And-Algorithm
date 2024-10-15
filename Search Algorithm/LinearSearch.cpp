#include <iostream>
#include <cmath>
using namespace std;
int LinearSearch(int arr[], int size, int target){
	for(int i=0;i<size;i++){
		if(arr[i]==target){
			return i;
		}
	}

}
int main(){
	int arr[] = {1,4,6,7,8,9,20,24,25};
	int size = sizeof(arr)/sizeof(arr[0]);
	int target = 25;
	int result = LinearSearch(arr,size,target);
	if(result!=-1){
		cout<<"Element found at "<<result;
	}
	else{
		cout<<"Element not found";
	}
	return 0;
}
