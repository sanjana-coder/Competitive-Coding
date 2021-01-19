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
    ll t,b,d;
    map<ll,ll> x;
    cin>>t;
    w(t)
    {
        cin>>b>>d;
        x[b]++;
        x[d]--;
    }
    ll p=0,y=0,c=0;
    for (auto i: x)
    {
        c+= i.second;
        if(c>p)
        {
            p=c;
            y=i.first;
        }
    }
    cout<<y<<" "<<p<<endl;
    
}