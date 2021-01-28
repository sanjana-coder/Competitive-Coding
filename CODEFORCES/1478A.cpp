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
       ll n,c=0,max=0;
       cin>>n;
       ll a[n];
       rep(i,n)
       {
           cin>>a[i];
           if(i==0) c++;
           if(i>0)
           {
               if(a[i]==a[i-1]) 
               {
                  c++;
               }
               else
               {
                   c=1;
               }   
           }
           if(max<c)
               {
                   max = c;
               }
       }
          cout<<max<<endl;  

           
       } 
       

    }
