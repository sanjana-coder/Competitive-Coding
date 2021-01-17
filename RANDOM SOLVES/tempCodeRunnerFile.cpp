#include <iostream>
using namespace std;

int main() {
int d1,v1,d2,v2,p,cd=0,x=0;
cin>>d1>>v1>>d2>>v2>>p;
if(d1>=1 && d1<=100 && v1>=1 && v1<=100 and d2>=1 && d2<=100 && v2>=1 && v2<=100 && p>=1 && p<=1000)
{
while(x<p)
{
if(p<=v1)
{
    cd = d1;
    break;
}
else if (p<=v2)
{
    cd = d2;
    break;
}

else {

if(d1<d2 && d1 !=cd)
{
    x = x+(d2-d1)*v1;
    
    cd = cd+d2-d1+1;  
    cout<<cd<<" cd";
    d1=d2;
}
else if(d1>d2 && d2 !=cd)
{
    x = x+(d1-d2)*v2;
    
    cd = cd+d1-d2+1;
      
    d2=d1;
   
}
else if(d1<d2 && d1 == cd)
{
    x = x+(d2-d1)*v1;
    
    cd = cd+d2-d1;  
    cout<<cd<<" cd";
    d1=d2;
}

else if(d1>d2 && d2 !=cd)
{
    x = x+(d1-d2)*v2;
    
    cd = cd+d1-d2;
      
    d2=d1;
}
else if(d1==d2)
{
    x = x+v1+v2;
    
    cd++;
    
}

}
}
cout<<cd;
return 0;
}

}
