#include <iostream>
#include <cmath>
using namespace std;
 
int main () {
   // number definition:
   short  s = 10;
   int    i = -1000;
   long   l = 100000;
   float  f = 230.47;
   double d = 60;

   // mathematical operations;
   cout << "sin(d) :" << sin(d) << endl;          //angle aapse
   cout << "abs(i)  :" << abs(i) << endl;         //absolute value aapse etle positive value
   cout << "floor(d) :" << floor(d) << endl;      //Finds the integer which is less than or equal to the argument passed to it.
   cout << "sqrt(f) :" << sqrt(f) << endl;        //square root aapse
   cout << "pow( d, 2) :" << pow(d, 2) << endl;   //d ni 2 power aapse
 
   return 0;
}