#include <bits/stdc++.h>
using namespace std;

// Merge two sorted halves
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merge elements in sorted order
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Put sorted temp back into original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive Merge Sort
void mS(vector<int> &arr, int low, int high) {
    if (low >= high) return;  // base case
    int mid = (low + high) / 2;
    mS(arr, low, mid);        // sort left half
    mS(arr, mid + 1, high);   // sort right half
    merge(arr, low, mid, high); // merge both halves
}

// Wrapper function
void mergeSort(vector<int> &arr) {
    mS(arr, 0, arr.size() - 1);
}

// Driver code
int main() {
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    mergeSort(arr);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
