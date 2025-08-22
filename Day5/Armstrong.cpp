#include<iostream>
#include<math.h>
using namespace std;
int count(int num)
{
    int temp,c=0;
    while(num!=0)
    {
        temp=num%10;
        c++;
        num=num/10;
    }
return c;
}
int main()
{
    int num,temp,ext,arm=0,c;
    
    cout<<"Enter the number ";
    cin>>num;
    temp=num;
    c=count(num);
    while(num!=0)
    {
        ext=num%10;
        arm=arm+(int)round(pow(ext, c));;
        num=num/10;

    }
    
    cout<<temp;
    if(arm==temp)
      cout<<"\nArmstrongg number";
    else
       cout<<"Not an armstrong number";

return 0;
}