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
        ll a[n],c=0,e=0;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]%2==1) c++;
            else e++;
        }
        if(c%2==0) cout<<1<<endl;
        else cout<<2<<endl;
        
    } 
}
