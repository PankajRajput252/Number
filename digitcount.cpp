#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,res,c=0;
    cout<<"Enter number.";
    cin>>num;
    while(num!=0)
    {
        res=num%10;
        c=c+1;
        num=num/10;
    }
    cout<<"Number of digits in number is: "<<c;
    return 0;

}