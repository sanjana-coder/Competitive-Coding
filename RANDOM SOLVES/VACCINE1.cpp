#include <iostream>
using namespace std;

int main() {
int d1,v1,d2,v2,p,cd=0;
cin>>d1>>v1>>d2>>v2>>p;
if(d1>=1 && d1<=100 && v1>=1 && v1<=100 and d2>=1 && d2<=100 && v2>=1 && v2<=100 && p>=1 && p<=1000)
{
	for(int i=1;p>0;i++)
	{
	    if(i>=d1)
	    {
	        p=p-v1;
	    }
	    if(i>=d2)
	    {
	        p=p-v2;
	    }
	    cd++;
	}
cout<<cd;
return 0;
}

}
