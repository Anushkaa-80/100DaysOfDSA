// 7. Star Pyramid
// markdown
// Copy code
// Input: n = 5
// Output:
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int sp=0;sp<n-i;sp++)
        {
            cout<<" ";
        
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}