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
        if(n==1) cout<<k<<endl;
        else 
        {
            if(n>k) 
            {
                int i=2;
                ll m=k;
                while(n>k) 
                {
                    k=m*i;
                    i++;
                }
            }
            cout<<((k+n-1)/n)<<endl;
        }
        

       
    } 
}
