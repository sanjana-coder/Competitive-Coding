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
    int n,a,b,c,d;
    cin>>n;
    do 
    {
        n++;
        a = n/1000;
        b = (n/100)%10;
        c = (n/10)%10;
        d = n%10; 
    }while(a==b || a==c || a==d || b==c || b==d || d==c);
    cout<<n;
        
}