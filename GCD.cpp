#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two number";
    cin>>num1;
    cin>>num2;
    while(num1 !=0)
    {
        if(num1>num2)
        {
            num1=num1 % num2;
        }
        else{
            swap(num1,num2);
        }
    }
 cout<<"GCD="<<num2;
  return 0;
}