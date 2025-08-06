// Right-Angled Triangle
// markdown

// Input: n = 5
// Output:
// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;

int main()
{
   int r,c;
   cout<<"Enter row and column"<<endl;
   cin>>r>>c;

   for(int i=0;i<r;i++)
   {
    for(int j=0;j<i;j++)
    {
        cout<<"*";
    }
    cout<<"\n";
   }

    return 0;

}