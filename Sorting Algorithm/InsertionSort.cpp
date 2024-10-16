#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) { // Outer loop starts from the second element
        int key = arr[i];         // Current element to be inserted
        int j = i - 1;            // Index of the last element in the sorted portion

        // Shift elements of arr[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j--;                  // Move to the previous element
        }
        arr[j + 1] = key;        // Insert the key at the correct position
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    insertionSort(arr, n); // Call the insertion sort function

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print sorted array
    }
    return 0;
}
//time complexity - O(n2);
