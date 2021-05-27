#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,r=2,res=1;
    cout<<"Enter two number";
    cin>>num1>>num2;
    while(1)
    {
        if(num1%r==0 && num2%r==0)
        {
            num1=num1/r;
            num2=num2/r;
            res=res*r;
        }
        else{
            r++;
        }
        if(num1<r || num2<r){
            break;
        }
    }
     cout<<"LCM="<<(res*num1*num2);
        return 0;
}