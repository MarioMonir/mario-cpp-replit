 //lap zero  6

/* write a program that reads name of worker and hours he worled during the week , the worker gets an overtime if he worked more than 40 hours given that the regualr hour is 10 wage per hour and the overtime is 15 

Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user (No test cases) 
__________________________________________________________________________*/

#include <iostream>
#include<math.h>
#include<string>
using namespace std;

 
int main()
{
string name ;
float salary;
int hours;

cout<<"enter your name";
cin>>name;
cout<<"hours you worked this week ";
cin>>hours;

 if (hours>40)
     {
       salary = (40*10)+((hours - 40)*15);
     }
     else
     {salary=hours*10;}
     
cout<<"Name of worker "<<name<<endl;
cout<<"hours worked per week "<<hours<<"\n";
cout<<"salary "<<salary;


return 0;

}
