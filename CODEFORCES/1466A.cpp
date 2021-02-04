#include <iostream> 
#include <math.h>
#include<string.h>
#include<numeric>
#include<algorithm>
#include<set>
#include <map>
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
        int n;
        cin>>n;
        set<int> st;
        int a[n];
        rep(i,n) cin>>a[i];
        rep(i,n)
        {
            for(int o=i+1;o<n;o++)
            {
                st.insert(a[o]-a[i]);
            }
        }
        cout<<st.size()<<endl;


    }    
}