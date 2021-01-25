#include <iostream> 
#include<string.h>
#include<algorithm>
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
        string x;
        cin>>x;
        if( any_of(x.begin() , x.end() , ::islower) 
        && any_of(x.begin()+1 , x.end()-1 , ::isupper)
        && any_of(x.begin()+1 , x.end()-1 , ::isdigit)
        && ((x.find('@',1)<=x.length()-2)
        || (x.find('#',1)<=x.length()-2)
        || (x.find('%',1)<=x.length()-2)
        || (x.find('&',1)<=x.length()-2)
        || (x.find('?',1)<=x.length()-2) 
        )
        && x.length()>=10
        )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
}
        
}