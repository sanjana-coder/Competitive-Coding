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
        long long int x,j=1,sum=0,o=0;
        rep(i,n)
        {
            cin>>x;
            sum += x;
            if(i>0)
            {
                long double m = (long double)sum - (long double)x,L=k/100.0;
                if(((long double)sum-1)/m > L)
                {
                    o = x*(99+k)/k - (long long)m ;
                    sum += o;

                }
            }
        }
        cout<<o<<endl;



       
    } 
}
