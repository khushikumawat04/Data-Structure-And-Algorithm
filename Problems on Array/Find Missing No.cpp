
#include <iostream>
#include <vector>
using namespace std;
// usinng hash map
// timeComplexity - O(n) spacecomplexity - O(n)
int MissingNo(int arr[], int n){
    vector <int> temp(n+1,0);
    for(int i=0; i<n; i++){
        temp[arr[i]]++;
    }
    for(int i=1; i<=n;i++){
        if(temp[i]==0){
            return i;
        }
    }
    return 0;
    
}

// using sum of No
// timeComplexity - O(n) spacecomplexity - O(1)
int MissingNo_sum(int arr[], int n){
    int totalSum = (n*(n+1))/2;
    int sum = 0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    // cout<<"sum"<<sum<<endl;
    return totalSum-sum;
}

int main()
{
    int arr[] = {1,2,3,5};
    int n   = sizeof(arr)/sizeof(arr[0]);
    cout<<"Missing No: "<<MissingNo(arr,n)<<endl;
    cout<<"Missing No: "<<MissingNo_sum(arr,n)<<endl;N
    return 0;
}
