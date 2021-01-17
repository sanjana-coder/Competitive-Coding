#include <iostream> 
#include <math.h>
#include<string.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    ll t,n,k,x,y;
    cin>>t;
    while(t--)
    {
      cin>>n>>k>>x>>y;
      if(x==y)
      {
          cout<<n<<" "<<n<<endl;
      }
      else if(x>y)
      {
         ll p1[] = {n,y+n-x};
         ll p2[] = {y+n-x,n};
         ll p3[] = {0,x-y};
         ll p4[] = {x-y,0};

         if(k%4==0)
         {
             cout<<p4[0]<<" "<<p4[1]<<endl;
         }
         else if(k%4==1)
         {
             cout<<p1[0]<<" "<<p1[1]<<endl;
         }
         else if(k%4==2)
         {
             cout<<p2[0]<<" "<<p2[1]<<endl;
         }
         else
         {
              cout<<p3[0]<<" "<<p3[1]<<endl;
         }

      }
      else
      {
          ll p2[] = {n,x+n-y};
          ll p1[] = {x+n-y,n};
          ll p4[] = {0,y-x};
          ll p3[] = {y-x,0};

         if(k%4==0)
         {
             cout<<p4[0]<<" "<<p4[1]<<endl;
         }
         else if(k%4==1)
         {
             cout<<p1[0]<<" "<<p1[1]<<endl;
         }
         else if(k%4==2)
         {
             cout<<p2[0]<<" "<<p2[1]<<endl;
         }
         else
         {
              cout<<p3[0]<<" "<<p3[1]<<endl;
         }
      }
    }
}