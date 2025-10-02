#include<bits/stdc++.h>
#include<vector>
using namespace std ;

vector<int>& rotateBy1(vector<int> &arr, int n)
{
   int temp=arr[0];
   for(int i=1;i<n;i++)
   {
    arr[i-1]=arr[i];
   }
   arr[n-1]=temp;

   return arr;
} 

vector<int> & rotateByD(vector<int> &arr, int n, int d)
{
    vector<int> temp;

    d=d%n;
    //step1: push the elem in temp
    for(int i=0;i<d;i++)
    {
        temp.push_back(arr[i]);
    }
    //step 2: shift it
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    //step3: put temp element to its place
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }
return arr;
}
int main()
{
    // cout << "\n--- Option 2: Return reference ---" << endl;
    vector<int> arr2 = {1, 2, 3, 4, 5};
    vector<int>& result2 = rotateByD(arr2, arr2.size(),7);
    cout << "Returned array: ";
    for(int x : result2) cout << x << " ";
    cout << "\nOriginal modified: ";
    for(int x : arr2) cout << x << " ";
    cout << endl;


}