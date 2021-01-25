#include <iostream> 
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=1;i<n;i++)
#define w(t) while(t--)
int main()
{
    ll t;
    cin>>t;
    w(t)
    {
        ll l,r;
        cin>>l>>r;
        cout<<2*r-2*l+1<<endl;
    }
        
}