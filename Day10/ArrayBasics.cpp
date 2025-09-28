#include<iostream>
#include <climits>
using namespace std;
int secondLargest(int arr[], int n) {
    if (n < 2) return -1; // not enough elements

    int largest = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second; // -1 if no second largest
}

int largest(int arr[])
{
    int n=7;
    int large=arr[0];
    for(int i=1;i<n;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }

    }

    return large;
}


int main()
{
    int arr[7]={3,2,1,5,6,8,4};
    int l=largest(arr);
    cout<<"Largest "<<l;
    int sl=secondLargest(arr,7);
    cout<<"\nsecond largest"<<sl;
return 0;
}