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

void reverse(int num)
{
    
}

int main()
{
    int c,num;
    cout<<"Enter the number ";
    cin>>num;
    c=countNum(num);

    cout<<"\nNumber has "<<c<<" digits";
    
    return 0;

}

