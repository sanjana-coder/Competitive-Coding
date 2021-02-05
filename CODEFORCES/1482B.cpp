#include <iostream> 
#include <math.h>
#include<string.h>
#include<numeric>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define w(t) while(t--)
int main()
{
    ll t;
    cin>>t;
    w(t)
    {
        ll n,k,p=0,i=0,o=0,max=0;
        cin>>n>>k;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i]>max) max=a[i]; o=i;
            }
        }
        if(o==1) cout<<-1<<endl;
        else if(n==1) cout<<-1<<endl;
        else
        {
        while(k>0)
        {
            for(ll i=1;i<n;i++)
            {
                cout<<"i"<<i;
                if(a[i]>a[i-1])
                {
                k = k-(a[i]-a[i-1]);
                p=i-1;
                cout<<"k"<<k;
                cout<<"p"<<p;
                break;
                } 
            
            }
            
            
        }
            if(p==n-1) cout<<-1<<endl;
            else
            {
                if(k<=0)
                {
                    cout<<p+1<<endl;
                }
            } 
        }
       
    }
}