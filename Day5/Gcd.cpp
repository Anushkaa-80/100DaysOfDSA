#include<iostream>
using namespace std;

int  Euclidean(int a, int b)
{
   while(b!=0)
{
    int temp=b;
    b=a%b;
    a=temp;
}
return a;
}
int main()
{
    int num1,num2,small,gcd=1,e;
    cout<<"Enter 2 numbers ";
    cin>>num1>>num2;

    small=(num1<num2)?num1:num2;
    for(int i=1;i<=small;i++)
    {
        if(num1%i==0 && num2%i==0)
           gcd=i;
    }
      
    cout<<"\n GCD of "<<num1 <<" and "<<num2<<" = "<<gcd;
    e=Euclidean(num1,num2);
    cout<<"\nEuclidean "<<e;
 return 0;

}

