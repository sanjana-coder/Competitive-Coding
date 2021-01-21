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
    int t,x;
    cin>>t;
    w(t)
    {
        cin>>x;
        if(x>45)
        {
            cout<<-1<<endl;
        }
        else
        {
            int p = 1, y , o=0;
            for(int i=9;i>0;i--)
            {
                y = i>x?x:i;
                o += p*y;
                p *= 10;
                x -= y;
            }
            cout<<o<<endl;
        }
    }
        
}