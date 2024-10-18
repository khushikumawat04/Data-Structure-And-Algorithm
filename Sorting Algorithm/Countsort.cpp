
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
void countsort(int arr[] ,int n){
    int k = arr[0];
    // find max
    for(int i=0;i<n;i++){
        k = max(k, arr[i]);
    }
    // temp array with 0 value;
    int count[k+1] = {0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    // commulitive sum;
    for(int i=0;i<=k;i++){
        count[i]+=count[i-1];
    }
    int ouput[n];
    for(int i=n-1;i>=0;i--){
        ouput[--count[arr[i]]] = arr[i];
    }
    
    // copy to roghinal array
     for(int i=0;i<n;i++){
         arr[i] = ouput[i];
     }
    
}

int main()
{
 int arr[] = {1,4,2,3,2,4,6,5};
 int n = sizeof(arr)/sizeof(arr[0]);
 countsort(arr,n);
 cout<<endl;
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }

    return 0;
}

//.................... Total Time Complexity:
// O(n + k), where:

// n is the number of elements.
// k is the range of the input (maximum element value).
