#include <iostream> 
#include <math.h>
#include<string.h>
#include<numeric>
#include<algorithm>
#include <map>
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
        ll a[n],b[n],s=0,k=0;
        rep(i,n)
        {
            cin>>a[i];
            b[i] = a[i];
            s+=b[i];
        }
        k=0;
        while(true)
        {
            if(a[k]%x==0)
            {
                a[k]/=x;
                s+=b[k];
                k++;
                if(k==n)
                {
                    k=0;
                }
                
            }
            else
            {
                break;
            }
        }

        cout<<s<<endl;


    }
    
}