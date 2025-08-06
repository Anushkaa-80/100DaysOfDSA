// Half Pyramid after 180° rotation
// makefile
// Copy
// Edit
// Input: n = 4
// Output:
//    *
//   **
//  ***
// ****

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {

            for(int sp=1;sp<n-i;sp++)
            {
                cout<<" ";
            }
            
            for(int j=0;j<=i;j++)
            {
                cout<<"*";
            }
        cout<<"\n";
    }
}