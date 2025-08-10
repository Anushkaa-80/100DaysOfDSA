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
    int n;
    cin>>n;
    
for(int i=1;i<=n;i++)

{
    //Decide starting number for each row
    int start;
    if(i%2==0) start=0;
    else start=1;
    

    for(int j=1;j<=i;j++)
    {
        
        cout<<start<<" ";
        start=1-start;
    }
     
    cout<<"\n";
}
    return 0;
}