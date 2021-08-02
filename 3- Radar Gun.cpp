 //lap zero  3

/* write a program to stimulate a state police radar gun, the program should take an automobile speed and display the message *speeding* if the speed exceed 65 mph

Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user 
__________________________________________________________________________*/

#include <iostream>
using namespace std;

 
int main()
{
 
 float radar_gun_read ;
 
 cout<<"enter the value of the radar gun ";
 
 cin>>radar_gun_read ;
 
 if(radar_gun_read>65)
    {
     cout<<"* Speeding *\n";  
    }

 return 0;
 
}