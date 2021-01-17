#include <iostream> 
#include <bits/stdc++.h> 
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
   string r,b;
   cin>>r>>b;
   sort(r.begin(), r.end(),greater<char>());
   sort(b.begin(), b.end(),greater<char>());
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
