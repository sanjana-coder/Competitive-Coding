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
        ll n;
        cin>>n;
        ll a[n],max=0;
        rep(i,n) cin>>a[i];
        sort(a,a+n);
        ll x=a[0],z=a[n-1],y=0;

            for(ll k=0;k<n-1;k++)
            {
                if(abs(x-a[k])+abs(z-a[k]) > max) max = abs(x-a[k])+abs(z-a[k]); y=a[k];
            }
        cout<<(abs(x-y)+abs(x-z)+abs(z-y))<<endl;
    } 
}
