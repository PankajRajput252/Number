#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,c;
    cout<<"Enter number"<<endl;
    cin>>n;
    for(int i=2; i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c=1;
        
            break;
        }
    }
    if(c==1)
    {
         cout<<n<<" is a not prime number."<<endl;
    }
         
        else{
              cout<<n<<" is a prime number."<<endl;
        }
       
    
    
            
    return 0;

}