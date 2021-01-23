#include <iostream> 
#include <math.h>
#include<string.h>
#include<numeric>
#include<algorithm>
#include <map>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=1;i<n;i++)
#define w(t) while(t--)
int main()
{
    int t,n;
    cin>>t;
    w(t)
    {
        cin>>n;
        string a;
        cin>>a;
        char o = a[0]+1;
        cout<<1;
        rep(i,n)
        {
            if(a[i]+1==o) 
            {
            cout<<0; 
            o=a[i];
            }
            else 
            {
            cout<<1; 
            o=a[i]+1;
            }
        }
        cout<<endl;
    }
        
}