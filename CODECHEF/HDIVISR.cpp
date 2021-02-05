#include <iostream> 
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<(n%10==0?10: n%9==0?9: n%8==0?8: n%7==0?7 :  n%6==0? 6 :  n%5==0? 5:  n%4==0? 4 :  n%3==0? 3 :  n%2==0? 2 : 1 )<<endl;
}
