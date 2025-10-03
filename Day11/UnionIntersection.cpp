// Union and intersection of 2 sorted array

#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;



vector<int> bruteUnion(vector<int> a, vector<int> b)
{
    int n1=a.size();
    int n2=b.size();
    set<int> st;
   vector<int> temp;
    for(int i=0;i<n1;i++)
    {
        st.insert(a[i]);
    }

      for(int i=0;i<n2;i++)
    {
        st.insert(b[i]);
    }

    for(auto it:st)
    {
        temp.push_back(it);
    }
    return temp;

}

int main()
{
   vector<int> a={1,1,2,3,4,5,6};
   vector<int> b={2,3,4,4,5};

   vector<int> arr=bruteUnion(a,b);
   
   for(int it=0;it<arr.size();it++)
   {
    cout<<arr[it];
   }

}