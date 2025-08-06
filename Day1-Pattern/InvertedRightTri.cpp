// Inverted Right-Angled Triangle
// markdown
// Input: n = 5
// Output:
// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter row and column";
    cin>>r>>c;
    for(int i=r;i>0;i--)
    {
        for(int j=r;j>0;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}