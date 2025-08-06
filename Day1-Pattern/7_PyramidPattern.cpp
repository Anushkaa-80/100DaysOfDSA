//  Pyramid Pattern
// markdown
// Input: n = 5
// Output:
//     *    
//    ***   
//   *****  
//  ******* 
// *********

#include<iostream>
using namespace std;

int main()
{
    int r;
    cin>>r;

    for(int i=0;i<r;i++)
    {

        for(int sp=0;sp<(r-i)-1;sp++)
        {
            cout<<" ";
        }
        for(int j=0;j<((2*i)+1);j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}