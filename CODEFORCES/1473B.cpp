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
    ll t;
    cin>>t;
    w(t)
    {
        string a,b,q="",w="";
        cin>>a>>b;
        int x = a.length(), y=b.length();
        int gcd = __gcd(x,y);
        rep(i,y/gcd)
        {
            q+=a;
        }
        rep(i,x/gcd)
        {
            w+=b;
        }
        if(q==w)
        {
            cout<<q<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        

    }
    
}