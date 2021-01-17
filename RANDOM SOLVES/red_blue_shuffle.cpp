#include <iostream> 
#include <math.h>
#include<string.h>
using namespace std;
#define ll long long int
#define w(t) long long t=0 while(t--)
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{

long long int t=0;
cin>>t;
while (t--)
{  int n=0;
   cin>>n;
   char r[n],b[n];
   cin>>r>>b;
   rep(i,n-1)
   {
       rep(j,n-i-1)
       {
           if (r[j] < r[j+1]) 
        { 
           register char temp = r[j];
           r[j]=r[j+1];
           r[j+1]=temp;
        } 

        if (b[j] < b[j+1]) 
        { 
           register char temp = b[j];
           b[j]=b[j+1];
           b[j+1]=temp;
        } 
       }
   }
   long long int l = stoi(r);
   long long int m = stoi(b);
   if(l>m)
   {
       cout<<"RED"<<endl;
   }
   else if(l<m)
   {
        cout<<"BLUE"<<endl;
   }
   else
   {
       cout<<"EQUAL"<<endl;
   }
}
}
