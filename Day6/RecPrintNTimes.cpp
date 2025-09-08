#include<iostream>
using namespace std;

void print(int n)
{
    if(n<=0)
      return;
          
    print(n-1);
    cout<<n;
}

void printNto1(int n)
{
    if(n<=0)
      return;
    cout<<n;  
    printNto1(n-1);
    
}

int main()
{
 int n=5;
 print(n);
 cout<<"\nReverse";
 printNto1(n);

}