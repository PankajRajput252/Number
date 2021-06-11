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
        c=c*10+res;
        num=num/10;
    }
     cout<<"Reserve number is"<<c;
    return 0;

}