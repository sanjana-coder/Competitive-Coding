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
    ll t,n;
    cin>>t;
    w(t)
    {

        cin>>n;
        int a[n],o=0,t=0;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]==1) o++;
            else t++;
        }
        if(o%2==0 && o>0)
        {
            cout<<"YES"<<endl;
        }
        else if((t==0 && o%2==0) || (o==0 && t%2==0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    
}