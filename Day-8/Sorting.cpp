#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    int min;
    for(int i=0;i<=n-2;i++)
    {
        min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

void bubble_sort(int arr[], int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int didSwap=0; //optimization
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                didSwap=1;
            }
        }
        if(didSwap==0)
            break;
    }


}



int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
     
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    //selection_sort(arr,n);
    bubble_sort(arr,n);
    cout<<"Sorted Array: ";
     for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}