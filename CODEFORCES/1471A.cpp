#include <iostream> 
#include <math.h>
#include<string.h>
#include<numeric>
#include<algorithm>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define w(t) while(t--)
int main()
{
    ll t,n,x;
    cin>>t;
    w(t)
    {

        cin>>n>>x;
        ll a,sum=0,sum1=0;
        rep(i,n)
        {
            cin>>a;
            sum+=a;
            sum1 += (a+x-1)/x;
        }
        sum = ((sum+x-1)/x);
    cout<<sum<<" "<<sum1<<endl;
        
    }
    
}