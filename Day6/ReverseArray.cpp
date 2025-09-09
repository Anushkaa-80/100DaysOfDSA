#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[], int n)
{
    if(i>=n/2)
      return;
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1,arr,n);
   
}
void reverse2(int l,int arr[], int r)
{
    if(l>=r)
       return;
    swap(arr[l],arr[r]);
    reverse2(l+1,arr,r-1);
}


int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
   cin>>arr[i];

   reverseArray(0,arr,n);
   cout<<"Reverse ";
   for(int j=0;j<n;j++)
     cout<<arr[j]<<" ";
    cout<<"Again rev ";
    reverse2(0,arr,n-1);
    for(int j=0;j<n;j++)
     cout<<arr[j]<<" ";


}