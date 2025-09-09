#include <bits/stdc++.h>
#include<string.h>
using namespace std;

bool palindrome(int i, string &str)
{
    if(i>=str.size()/2)
      return true;
    
    if(str[i]!=str[str.size()-i-1])
      return false;
    
    return palindrome(i+1,str);

}
int fibonnaci(int n)
{
    if(n<=1)
     return n;

    return fibonnaci(n-1)+fibonnaci(n-2);
}


int main()
{
  string s="madams";
  cout<<palindrome(0,s);
  int n=4;
  cout<<"fibonacci"<<fibonnaci(n);
}