#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotateOptimal(int arr[], int n, int d) {
    d = d % n; // agar d > n ho to
    rev(arr, 0, d-1);     // Step 1: reverse first d elements
    rev(arr, d, n-1);     // Step 2: reverse remaining n-d elements
    rev(arr, 0, n-1);     // Step 3: reverse whole array
}

void rightRotateOptimal(int arr[], int n, int d)
{
     d=d%n;
     rev(arr, 0, n-1);
     rev(arr, d, n-1);
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, d = 6;

    rightRotateOptimal(arr, n, d);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
//TODO: implement right rotation: Done:
