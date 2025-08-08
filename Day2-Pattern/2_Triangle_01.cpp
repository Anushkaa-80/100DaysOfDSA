// 0-1 Triangle
// Input: n = 5
// Output:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    int n=1;
for(int i=0;i<6;i++)

{  
    for(int j=0;j<i;j++)
    {
        
        cout<<n;
        n=!(n);
    }
     
    cout<<"\n";
}
    return 0;
}