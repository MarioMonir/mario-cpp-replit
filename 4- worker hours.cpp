 //lap zero  4

/* write a program to stimulate a state police radar gun, the program should take an automobile speed and display the message *speeding* if the speed exceed 65 mph

Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user (No test cases) 
__________________________________________________________________________*/

#include <iostream>
using namespace std;


int Salary(int hours);
 
int main()
{
 
 int hours ;
 
 cout<<"Enter Numeber Hours you worked in the week \n";
 cin>>hours;
 cout<<<<Salary(hours);
 return 0;
}

int Salary(int hours)
{
    float salary ;
  if ( hours <= 40 )
   { salary = hours*10 ;
     return salary ;
   }
   
   else if (hours > 40 )
   {
     salary = (40*10) + (hours-40)*15;
     return salary;
   }

}