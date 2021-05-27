#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,c=1;
    cout<<"Enter number"<<endl;
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        c=c*i;
    }
    cout<<c;
    return 0;

}