#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> brute(vector<int> arr, int n)
{
    vector<int> temp;
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
void optimal(int arr[], int n)
{
    //s1: we neeed two pointers i and j
    // i points to non-zero and j points to zero
    // s2: check i is non-zero, and j==0
    /// swapthe i and j

    //step1: pointing j to zero
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    //step2:
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
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
    int arr2[10]={1,0,2,3,2,0,0,4,5,1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    optimal(arr2,n);
    cout<<"\n Optimal solution is:";
     for(int i=0;i<n2;i++)
    {
        cout<<arr2[i];
    }

}
