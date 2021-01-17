#include <iostream> 
#include <math.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    int w;
    cin>>w;
    if(w%2==0)
    {
        if(w==2)
        {
           cout<<"NO"; 
        }
        else
        {
            cout<<"YES";
        }
    }
    else
    {
        cout<<"NO";
    }
    
}