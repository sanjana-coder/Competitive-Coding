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
        if(p<=1)
        {
            cout<<"YES"<<endl;
        }
        else if((r-1)%2+(g-1)%2+(b-1)%2+(w+3)%2 <= 1 && r && b&& g)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    
}