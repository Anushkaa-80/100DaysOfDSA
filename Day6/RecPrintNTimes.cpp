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
    cout<<n<<" ";  
    printNto1(n-1);
    
}

int sum(int n)
{
  if(n<=0)
  return 0;
else
   return n+sum(n-1);


}
int fact(int n)
{
  if(n<=1)
     return 1;
  else
     return n*fact(n-1);

}

int main()
{
 int n=4,s,f;
 print(n);
 cout<<"\nReverse ";
 printNto1(n);
 s=sum(n);
 cout<<"\nSum of N natural numbers "<<s;
 f=fact(n);
 cout<<"\nFactorial of the given number "<<f;


}