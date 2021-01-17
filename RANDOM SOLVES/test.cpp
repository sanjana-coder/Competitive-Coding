#include <iostream>

#include <string>

#include <cstdlib>

using namespace std;

template<class T>

class A

{

   public:

   A(){

                   cout<<"Created\n";

   }

   ~A(){

                   cout<<"Destroyed\n";

   }

};

 

int main(int argc, char const *argv[])

{

   A a;

   return 0;

}