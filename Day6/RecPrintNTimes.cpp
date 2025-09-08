#include<iostream>
using namespace std;

void print(int n)
{
    if(n==5)
      return;
    n++;
    cout<<n;
    print(n);
}


int main()
{
 int n=0;
 print(n);
}