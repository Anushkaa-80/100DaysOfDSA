#include<iostream>
#include <climits>
#include <algorithm>
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

int second_smallest(int arr[], int n)
{
    int smallest=arr[0];
    int small2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            small2=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<small2)
        {
            small2=arr[i];
        }

    }
    return small2;

}
bool is_sorted(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {

        }
        else
        {
            return false;
        }
    }
    return true;
}
int remove_duplicates(int arr[], int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            i++;
            arr[i]=arr[j];
            
        }

    }
    return (i+1);
}


int main()
{
    int arr[7]={1,1,2,2,3,3,3};
    // int l=largest(arr);
    // cout<<"Largest "<<l;
    // int sl=secondLargest(arr,7);
    // cout<<"\nsecond largest"<<sl;
    //  cout<<"Second smallest"<<second_smallest(arr,7);
    //  cout<<"\nSorted"<<is_sorted(arr,7);

     int index=remove_duplicates(arr,7);
     for(int i=0;i<index;i++)
     { 
     cout<<arr[i];
     }
return 0;
}