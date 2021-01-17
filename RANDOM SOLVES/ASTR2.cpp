#include <iostream> 
#include <math.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    ll t,n,k;
    cin>>t;
    while(t--)
    {
      cin>>n>>k;
      ll a[n+k]={0};
      rep(i,n){
          cin>>a[i];     
      }
      sort(a,a+n,greater<int>());
      ll m=1,s=0;
      for(ll i=0;i<n;i+=k)
      {
          ll l=1;
          while (l<=k)
          {
              s+= a[i+l-1]*m;
              l++;
          }
        
          m++;
      }
      ll x = s%(1000000007);
      cout<<x<<endl;

      

}}