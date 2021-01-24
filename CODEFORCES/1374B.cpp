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
    ll t;
    cin>>t;
    w(t)
    {
        ll n;
        cin>>n;
        int a=0;
        int b=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                a++;
            }
            else
            {
                break;
            }
        }
        while(n!=1)
        {
            if(n%3==0)
            {
                n=n/3;
                b++;
            }
            else
            {
                break;
            }
        }
        if(n==1 && a<=b)
        {
            cout<<2*b-a<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
}
        
}