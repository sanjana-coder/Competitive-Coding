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

int dp[102];
ll d;
 
bool fun(ll n)
{
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    ll td=d;
    bool f=0;
    rep(i,10)
    f = (f |fun(n-td-i*10));
    dp[n] = f;
    return f;
}

int main()
{
    ll t;
    cin>>t;
    w(t)
    {
       ll q;
       cin>>q>>d;
       memset(dp,-1,sizeof(dp));
        while(q--)
        {
            ll x;
            cin>>x;
            if(x>=d*10)
            {
                cout<<"YES\n";
                continue;
            }
            cout<<(fun(x)?"YES\n":"NO\n");
        }




    } 
    }
