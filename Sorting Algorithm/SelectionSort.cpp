
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
   for(int i=0;i<n-1;i++){
     int mine = i;
     for(int j=i+1;j<n;j++){
         if(arr[mine]>arr[j]){
             mine = j;
         }
     }
     swap(arr[mine],arr[i]);
   }   
}


int main()
{
     int arr[] = {46, 52, 21, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
   cout<<"Sorted array"<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// Time Complexity: O(n2) ,as there are two nested loops:

// One loop to select an element of Array one by one = O(n)
// Another loop to compare that element with every other Array element = O(n)
// Therefore overall complexity = O(n) * O(n) = O(n*n) = O(n2)
