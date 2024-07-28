#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {8, 7, 1, 6, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    sort(arr, arr + n);

    // Print the first half of the array
    for (int i = 0; i < n / 2; i++) {
        cout << arr[i] << " ";
    }

    // Print the second half of the array in reverse order
    for (int i = n - 1; i >= n / 2; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}

