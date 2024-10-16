
#include <iostream>
using namespace std;

void Bubblesort(int arr[], int n){
    
    
    int temp;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout<<"After Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main()

{
    int arr[] = {3,2,10,7,11,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    Bubblesort(arr,n);
   

    return 0;
}


In the worst case, Bubble Sort requires \(O(n^2)\) 
time because it must compare each element with every other element in the array. 
For an array of size \(n\), there are \(n-1\) comparisons in the first pass, 
\(n-2\) in the second, and so on, resulting in a total of (n(n-1))/2 comparisons
 and swaps. Since both comparisons and swaps take constant time,
 the overall time complexity is (O(n^2).
