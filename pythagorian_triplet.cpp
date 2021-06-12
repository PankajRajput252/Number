#include<bits/stdc++.h>
using namespace std;
void pythagorian(int x,int y,int z)
{   
    int a,b,c;
     a=max(x,max(y,z));
    if(a==y){
        b=x;
        c=z;
    }
    if(a==z)
    {
        b=x;
        c=y;
    }
    if(a*a==(b*b+c*c))
    {
        cout<<"Pythagorian triplet.";
    }
    else
    {
        cout<<"Not Pythagorian triplet.";
    }
}
int main()
{
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    pythagorian(x,y,z);
}