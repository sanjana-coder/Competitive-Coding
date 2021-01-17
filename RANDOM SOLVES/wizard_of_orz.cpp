#include <iostream> 
#include <math.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      string a = "0123456789";
      if(n==1)
      {
        cout<<"9"<<endl;
        
      }
     else if(n==2)
     {
       cout<<"98"<<endl;
     }

     else
     {
       cout<<"989";
       rep(i,n-3)
       {
         cout<<i%10;
       }
       cout<<endl;
     }
     
     
     
    
     

    
}
}