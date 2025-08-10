// 13. Hollow Rhombus
// makefile
// Copy code
// Input: n = 5
// Output:
//     *****
//    *   *
//   *   *
//  *   *
// *****

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    for(int i=n;i>0;i--)
    {
        for(int sp=0;sp<i;sp++)
        {
            cout<<" ";

        }
        for(int j=0;j<n;j++)
        {

            if(i==n || i==1)
            {
                cout<<"*";
            }
            else{
                if(j==0 ||j==(n-1))
                  cout<<"*";
                else
                   cout<<" ";
        
            }
           
    }
    
cout<<endl;
    }
}