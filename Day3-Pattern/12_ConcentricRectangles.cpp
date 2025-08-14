// 23. Concentric Rectangles Number Pattern
// makefile
// Copy code
// Input: n = 4
// Output:
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int top,left,right,bottom;

    for(int i=0;i<(2*n-1);i++)
    {
        for(int j=0;j<(2*n-1);j++)
        {
            top=i;
            left=j;
            right=(2*n-2)-j;
            bottom=(2*n-2)-i;
            
            cout<<n-min(min(top,bottom),min(left,right));
        }
cout<<endl;
    }
}