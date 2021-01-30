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
        ll n,k;
        cin>>n>>k;
        ll a[n],s=0,l=0,o=0;;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]!=-1)
            {
                s++;
            }
            if(a[i]>k)
            {
                l++;
            }
            if(a[i]<=1 && a[i]>-1) o++;
        }
        if(s<(n+1)/2) cout<<"Rejected"<<endl;
        else if (l>0) cout<<"Too Slow"<<endl;
        else if (s==n && o==n) cout<<"Bot"<<endl;
        else cout<<"Accepted"<<endl;
    } 
}
