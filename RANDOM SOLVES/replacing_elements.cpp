#include <iostream> 
#include <math.h>
#include<algorithm>
using namespace std;
int main()
{

int t,n,d,c;
cin>>t;
while (t--)
{
    c=0;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>d)
        {
            c++;
        }
    }
    sort(a,a+n);
    
    int min = (a[0]+a[1]);
    if(c==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(min>d)
        {
            cout<<"NO"<<endl;
        }
        else
        {
             cout<<"YES"<<endl;
        }
        
    }
    

}
}
