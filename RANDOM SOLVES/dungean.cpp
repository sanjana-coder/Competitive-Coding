#include <iostream> 
#include <math.h>
using namespace std;
int main()
{

long long int t,a,b,c =0;
cin>>t;
while (t--)
{
    cin>>a>>b>>c;
    if((a==1 && b!=1 && c!=1) || (b==1 && a!=1 && c!=1) || (c==1 && b!=1 && a!=1))
    {
        if(a+b+c==7)
        {
            cout<<"yes"<<endl;
        }
        else if((a+b+c-2)%2==0 && (a+b+c-2)%3==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
    }
    else if ((a==1 && b==1 && c!=1) || (b==1 && a!=1 && c==1) || (c==1 && b!=1 && a==1))
    {
        if((a+b+c-1)%2==0 && (a+b+c-1)%3==0)
    {
        cout<<"yes"<<endl;
    }
 
    else
    {
         cout<<"no"<<endl;
    }
    }
    else
    {
        if((a+b+c-3)%2==0 && (a+b+c-3)%3==0)
    {
        cout<<"yes"<<endl;
    }
 
    else
    {
         cout<<"no"<<endl;
    }
    }
    
}
}
