#include<iostream>
using namespace std;

int countNum(int num)
{
    int n,count=0;
    while(num>0)
    {
    n=num%10;
    count++;
    num=num/10;
    }
    return count;
}

int  reverse(int num)
{
    int rev=0,n;
    while(num>0)

    
    {
        n=num%10;
      rev=rev*10+n;
      num=num/10;
       }
       return rev;
}
void palindrome(int num)
{
    int temp;
    temp=num;
   num =reverse(num);
   if(num==temp)
    {
        cout<<"Palindrome";

    }
    else
    {
        cout<<"Not a palindrome";
    }

}
int main()
{
    int c,num,r;
    cout<<"Enter the number ";
    cin>>num;
    // c=countNum(num);
    //  r= reverse(num);
    // cout<<"\nNumber has "<<c<<" digits";
    // cout<<"Reverse"<<r;
    palindrome(num);
    return 0;

}

