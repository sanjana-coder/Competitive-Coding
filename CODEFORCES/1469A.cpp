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
        string a;
        cin>>a;
        int l = a.length();
        cout<<( (l%2 || a[0]==')' || a[l-1]=='(' ) ? "NO\n" : "YES\n" );
    }
    
}