#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,res,c=0,temp;

    cout<<"Enter number.";
    cin>>num;
    temp=num;
    while(num!=0)
    {
        res=num%10;
        c=c*10+res;
        num=num/10;
    }
    if(temp==c){
              cout<<"Number is palindrome."<<endl;
    }
    else{
        cout<<"Number is not palindrome.";
    }
  
    return 0;

}