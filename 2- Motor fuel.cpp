 //lap zero  2

/* A motor car used 8 liters of fuel per 100 km on normal roads and 15% more fuel on rough roads write a program to print out the distance that car can travel on full tank of 40 liters of fuel on both normal and rough roads 

in a simple way     Normal Road                                 Rough Road
                 8 liters -----> 100 km     8*(1.15) = 9.2 liter---------> 100km
                 40 = 8*5 -----> 5*100                  40 liter--------->434.7826087
 ____________________________________________________________*/

#include <iostream>
using namespace std;

 
int main()
{
 
 cout<<"When the tank is full of 40 liter \n";
 cout<<"The Car can travel  "<<(100*40)/8<<"      km  At Normal road \n";
 cout<<"The Car can travel  "<<(100*40)/(8*1.15)<<"  km  At Rough  road \n";
 
 
 return 0;
 
}