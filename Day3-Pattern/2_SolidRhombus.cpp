// 12. Solid Rhombus
// makefile
// Copy code
// Input: n = 5
// Output:
// 1111*****
//    *****
//   *****
//  *****
// *****

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter n"<<endl;
    cin>>n;

    for(int i=n;i>0;i--)
    {
        for(int sp=0;sp<i;sp++)
        {
            cout<<" ";

        }
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}