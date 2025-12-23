#include <iostream>
#include <bits/stdc++.h>
#include<vector>

using namespace std;
//work with all +ve,-ve and zeroes
int longestSubarrayWithSumK(vector<int> a, long long k )
{
    map<long long, int> preSumMap;
    long long sum =0;
    int maxLen=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];
        if(sum==k)
        {
            maxLen=max(maxLen,i+1);
        }
        long long rem= sum -k;
        if(preSumMap.find(rem)!=preSumMap.end())
        {
            int len = i- preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end())
        {
            preSumMap[sum]=i;
        }
    }
    return maxLen;

}
//positives and zeroes
int longestSubarrayOptimal(vector<int> a, long long k)
{
    long long left=0, right=0;
    long long sum=0,maxLen=0;
    int n=a.size();
    while(right<n)
    {
        while(left<=right && sum >k)
        {
            sum-=a[left];
            left++;
        }
        if(sum==k)
        {
            maxLen=max(maxLen,(right-left+1));
            
        }
        right++;
        if(right<n) sum+=a[right];
    }
    return maxLen;
}
int main()
{
    vector<int> arr ={1,2,3,1,1,1,1,4,2,3};
    int l = longestSubarrayOptimal(arr,7);
    cout<<"Longest subarray with given sum "<<l;
}