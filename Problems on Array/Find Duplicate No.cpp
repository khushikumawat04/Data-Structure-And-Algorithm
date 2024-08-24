

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
// usinng hash map
// timeComplexity - O(n) spacecomplexity - O(n)
void DuplicateNo(int arr[], int n){
    int max = *max_element(arr,arr+n);
    vector <int> temp(max+1,0);
    for(int i=0; i<n; i++){
        temp[arr[i]]++;
    }
    for(int i=1; i<=temp.size();i++){
        if(temp[i]>1){
            cout<<i<<" ";
        }
    }
}



// using map
void Duplicate_map(int arr[],int n){
    int max = *max_element(arr,arr+n);
   unordered_map <int, int> temp;
      for(int i=0; i<n; i++){
        temp[arr[i]]++;
    }
    for(auto it: temp){
        if(it.second > 1){
            cout<<it.first<<" ";
        }
    }
    
}



int main()
{
    int arr[] = {1,2,3,3,5,5,6,6,20,20};
    int n   = sizeof(arr)/sizeof(arr[0]);
 
    cout<<"Duplicate No: ";
    DuplicateNo(arr,n);
    cout<<endl;
    Duplicate_map(arr,n);
   
    
    
   

    return 0;
}
