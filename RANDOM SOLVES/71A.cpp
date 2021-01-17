#include <iostream> 
#include <math.h>
#include<string.h>
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
        string a;
        cin>>a;
        int x = a.length();
        if(x<=10)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a[0]<<x-2<<a[x-1]<<endl;
        }
        
    }
    
}