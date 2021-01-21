#include <iostream> 
#include <math.h>
#include<string.h>
#include<numeric>
#include<algorithm>
#include <map>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=1;i<=n;i++)
#define w(t) while(t--)
int main()
{
    int a[5][5]={0};
    rep(i,3)
    {
        rep(j,3)
        {
            cin>>a[i][j];
        }
    }
    rep(i,3)
    {
        rep(j,3)
        {
            cout<<1-(a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1])%2;
        }
        cout<<endl;
    }
        
}