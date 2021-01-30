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
        ll a,b,c;
        cin>>a>>b>>c;
        if(a+b==c || b==a+c || a==b+c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    } 
}
