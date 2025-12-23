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
vector<int> optimal(vector<int> a, vector<int>b)
{
    int n1=a.size();
    int n2=b.size();
    int i=0, j=0;
    vector<int> unionArr;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
if(unionArr.size()==0 || unionArr.back()!=a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }

    }
    while(j<n2)
    {
        if(unionArr.size()==0 || unionArr.back()!=b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;

    }
      while(i<n1)
    {
        if(unionArr.size()==0 || unionArr.back()!=a[i])
        {
            unionArr.push_back(a[i]);
        }
    i++;

    }
return unionArr;
}
vector<int> intersection(vector<int> A, vector<int> B)
{
    int i=0, j=0;
    int n= A.size();
    int m=B.size();

    vector<int> ans;

   while(i<n && j<m)
   {
    if(A[i]<B[j])
    {
        i++;
    }
    else if(B[j]<A[i])
    {
        j++;
    }
    else{
        ans.push_back(A[i]);
        i++;
        j++;
    }

   }
    return ans;

}
int main()
{
   vector<int> a={1,1,2,3,4,4,5,6};
   vector<int> b={2,3,4,4,5};

   vector<int> arr=intersection(a,b);

   for(int it=0;it<arr.size();it++)
   {
    cout<<arr[it];
   }

}