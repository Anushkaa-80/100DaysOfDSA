#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    //pre compute

    map<int, int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cout<<"Enter the numbers to find the frequency of";
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<number<<"->"<<mpp[number]<<endl;
    }
    return 0;
}