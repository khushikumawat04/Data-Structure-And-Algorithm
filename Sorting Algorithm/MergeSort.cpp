
#include <iostream>
using namespace std;
void merge(int arr[],int start, int mid, int end){
    int size = end-start+1;
    int left = start;
    int right = mid+1;
    int index = 0;
    int temp[size];
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            left++;
            index++;
        }
        else{
              temp[index] = arr[right];
            right++;
            index++;
        }
    }
    while(left<=mid){
         temp[index] = arr[left];
            left++;
            index++;
    }
    while(right<=end){
          temp[index] = arr[right];
            right++;
            index++;
    }
     for(int i = 0; i < size; i++) {
        arr[start + i] = temp[i];
    }
}

void mergesort(int arr[], int start, int end){
    if(start==end){
        return;
    }
   int mid = start + (end - start) / 2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main()
{
   int arr[] = {2,5,1,10,7,6};
   int n = sizeof(arr)/sizeof(arr[0]);
  mergesort(arr, 0, n-1);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}
