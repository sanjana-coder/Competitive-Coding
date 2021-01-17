#include <iostream> 
#include <math.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      ll a[n],b[n]={0};
      rep(i,n){
          cin>>a[i];
          
          b[int(round(sqrt(a[i])))-1] +=1;   
      }
      rep(i,n){
          if(b[i]==0)
          {
              cout<< (i+1)*(i+1) <<endl;
              break;
          }
      }
    }

}