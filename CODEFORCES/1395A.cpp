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
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        int p = r%2+g%2+b%2+w%2;
        if(p<=1 || p>=3 && (r>0 && g>0 && b>0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    
}