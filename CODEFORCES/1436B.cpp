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
    int t,n;
    cin>>t;
    w(t)
    {
        cin>>n;
        rep(i,n)
        {
            rep(j,n)
            {
                if (i==j or j-i==1 or i-j ==1) cout<<"1 ";
                else cout<<"0 ";
            }
            cout<<endl;
        }
    }
        
}