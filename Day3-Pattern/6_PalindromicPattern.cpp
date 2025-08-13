// 16. Palindromic Pattern
// makefile
// Copy code
// Input: n = 5
// Output:
//          1
//        2 1 2
//      3 2 1 2 3
//    4 3 2 1 2 3 4
//  5 4 3 2 1 2 3 4 5

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;

    for(int  i=1;i<=n;i++)
    {
        for(int sp=1;sp<=n-i;sp++)
        {
            cout<<" ";
        }
        for(int dec=i;dec>1;dec--)
        {
            cout<<dec;
        }
        for(int inc=1;inc<=i;inc++)
        {
            cout<<inc;
        }
        cout<<endl;
    }
    return 0;
}