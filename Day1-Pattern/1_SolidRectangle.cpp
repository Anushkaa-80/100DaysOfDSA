//  Solid Rectangle
// markdown
// Input: n = 4, m = 5
// Output:
// *****
// *****
// *****
// *****

#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter row and column";
    cin>>r>>c;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}