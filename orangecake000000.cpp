#include <iostream>

using namespace std;

int main ()
{



   int a;

   cout<<"enter numb A;";
   cin>>a;

   int b;
   cout<<"number B;";
   cin>>b;

   int termporary_variable=a;
   a = b;
   b = termporary_variable;

   cout<<"A is" <<a << endl<<"B is"<<b<<endl<<".";




    return 0;
}
