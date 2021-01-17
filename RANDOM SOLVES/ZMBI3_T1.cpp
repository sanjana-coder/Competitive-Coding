//HELI2021 CODECHEF
#include <iostream> 
#include <math.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    ll t,n,k,d;
    cin>>t;
    while(t--)
    {
      cin>>n>>k>>d;
      ll a[n];
      rep(i,n)
      {
          cin>>a[i];
      }
      ll start=0, end=0, curr_len=0, max_len=0;
      while(end<n)
      {
      if(k<0) // shifting start point and end point
      {
        while(a[start]>=d)
        {
          start++;
        }
        end++;
        start++; // to remove the one critically affected zombie from the window
        k++;
        curr_len = end - start;
      }
      else
      {
        
        if(a[end]<d)  // counting critical zombies
        {
          k--;
        }
        if(k>=0)
        {
          end++;
          curr_len++;
        }
        
      }
      if(curr_len > max_len)
        {
          max_len = curr_len;
        }
      }
     
      cout<<max_len<<endl;
    }
}