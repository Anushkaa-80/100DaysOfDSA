// 15. Number Pyramid
// makefile
// Copy code
// Input: n = 5
// Output:
//         1
//        2 2
//       3 3 3
//      4 4 4 4
//     5 5 5 5 5
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int sp=1;sp<=n-i;sp++)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;

}