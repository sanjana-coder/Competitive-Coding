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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,s=0,s1=0,x=0;
    cin>>t;
    ll a[t];
    rep(i,t)
    {
        cin>>a[i];
        s+=a[i];
    }    
    rep(i,t)
    {
        s1+=a[i];
        if(s-s1 == s1 && i!=t-1) x++;
    }
    cout<<x<<endl;
}
