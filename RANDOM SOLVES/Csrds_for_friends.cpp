#include <iostream> 
#include <math.h>
#include<string.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
long long int fac ( long long int w)
{   long long int i=1,s=0;
    rep(i,w/2)
    {
        if(w/pow(2,i)>=1)
        {
            s += w/pow(2,i);
            cout<<s<<endl;
        }
        else
        {
            break;
        }
        
    }
    return s;
}
int main()
{
    ll t,w,h,n;
    cin>>t;
    while(t--)
    {
      cin>>w>>h>>n;
      if(n==1)
      {
          cout<<"YES"<<endl;
      }
      else
      { 
          ll x=fac(w),y=fac(h);
         if(w%2!=0 && h%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else if(w%2==0 && h%2!=0)
        {
    
            if( pow(2,x) >= n && x%2==0 )
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        else if(w%2!=0 && h%2==0)
        {
            if( pow(2,y) >= n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        } 
        else
        {
            if( pow(2,x) >= n || pow(2,y) >= n)
            {
                cout<<"YES"<<endl;
            }
            else if(pow(2,x) + pow(2,y) >= n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            

        }
        

      }
      
        
        
    }
}