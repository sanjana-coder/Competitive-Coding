#include <iostream> 
#include <math.h>
#include<string.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x,sum=0;
        cin>>n>>k;
        sum=0;
        while(n--)
        {
            cin>>x;
            sum+=x;
        }
        if(sum%k==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
        
    }
}