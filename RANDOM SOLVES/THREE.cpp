#include <iostream> 
#include <math.h>
#include<string.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {   ll c=-1,i=0,n=0;
        string s;
        cin>>s;
        n= s.length();

        while(i<n){
            
            if(s.find(s[i]))
            {
                c++;
                s.replace(s[i],'');
                n= s.length();
            }

            i++;

        }

        cout<<int(c/3)<<endl;
        
        
    }
}