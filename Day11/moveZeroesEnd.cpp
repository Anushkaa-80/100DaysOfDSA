#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> brute(vector<int> arr, int n)
{
    vector<int > temp;
    // int n=arr.size();
    // //s1: store non-zero to temp
    // int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
           temp.push_back(arr[i]);
          
        }
    }
    //s2:  store temp to front of arr
    for(int i=0; i<temp.size();i++)
    {
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++)
    {
        arr[i]=0;
    }
    return arr;
}
int main()
{
    vector<int > arr={1,0,2,3,2,0,0,4,5,1};
    int n=arr.size();

    arr=brute(arr,n);


    cout<<"\nZeroes at end\n :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}
