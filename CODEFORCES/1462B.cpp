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
        ll n;
        cin>>n;
        string s="2020",o;
        cin>>o;
        int a=0,b=0;
	rep(i,4) 
    {
        if(s[i]!=o[i]) break; 
        else a++;
    }
	for(int i=n-1;i>=n-4;i--) 
    {
        if(o[i]!=s[i-n+4]) break; 
        else b++;
    }
	if(a+b>=4) 
    {
        cout<<"YES"<<endl;
    }
	else 
    {
        cout<<"NO"<<endl;
    }
             
    } 
}
