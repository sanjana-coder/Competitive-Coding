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
    int t,n,k,h[110],p,ans;
	cin>>t;
	w(t) {
		cin>>n>>k;
		for (int i=1;i<=n;i++) cin>>h[i];
		for (p=1;p<=k;p++) {
			ans=-1;
			for (int i=1;i<n;i++) if (h[i]<h[i+1]) {ans=i;h[i]++;break;}
			if (ans==-1) break;
		}
		cout<<ans<<endl;
	}
}