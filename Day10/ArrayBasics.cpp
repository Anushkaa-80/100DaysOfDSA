#include<iostream>
using namespace std;
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
return 0;
}