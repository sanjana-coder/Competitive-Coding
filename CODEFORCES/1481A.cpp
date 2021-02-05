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
        ll px,py,o=0;
        cin>>px>>py;
        string s;
        cin>>s;
        ll u = count(s.begin(),s.end(),'U'),d = count(s.begin(),s.end(),'D'),r = count(s.begin(),s.end(),'R'),l = count(s.begin(),s.end(),'L');
        if((px>=0 && py>0) || (px>0 && py>=0))
        {if(u>=abs(py) && r>=abs(px)) o++;} 
        else if((px>=0 && py<0) || (px>0 && py<=0))
        {if(d>=abs(py) && r>=abs(px)) o++;} 
        else if((px<=0 && py>0) || (px<0 && py>=0))
        {if(u>=abs(py) && l>=abs(px)) o++;} 
        else if((px<=0 && py<0) || (px<0 && py<=0))
        {if(d>=abs(py) && l>=abs(px)) o++;}
        else o=0;
        
        if(o) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}