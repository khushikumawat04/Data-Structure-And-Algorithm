#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
 
// using umordered map
void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}

//using vector 
void Frequency_vec(int arr[] ,int n){
	   int max_val = *max_element(arr, arr + n);
	vector <int> v;
	for(int i=0;i<n;i++){
		v[arr[i]]++;
	}
	for(int i=0;i<v.size();i++){#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm> 
using namespace std;
 
// using umordered map
void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}

//using vector 
void FrequencyVec(int arr[] ,int n){
       int max_val = *max_element(arr, arr + n);
	vector <int> v(max_val+1,0);
	for(int i=0;i<n;i++){
		v[arr[i]]++;
	}
	for(int i=0;i<=max_val;i++){
		 if (v[i] > 0) {
            cout << i << " " << v[i] << endl;
        }
	}

}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Frequency(arr, n);
   FrequencyVec(arr,n);
    return 0;
}
		cout<<arr[i]<< " "<<v[arr[i]]<<endl;
	}
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    Frequency_vec(arr,n);
    return 0;
}
