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
    ll n,t;
    string a,x="";
    cin>>n>>t;
    cin>>a;
    int y = a.length();
    w(t)
    {
    rep(i,y)
    {
        if(a[i]=='B' && a[i+1]=='G')
        {
            a[i]='G';
            a[i+1]='B';
            i++;
        }

    }
    }
    
    cout<<a<<endl;

    
}