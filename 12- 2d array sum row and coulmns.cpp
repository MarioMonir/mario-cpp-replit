 //Arrays  10  2/3     (mid - term)                        

/* write a complete c programs to ask the user for the elemens of a 2*5 type double array named array the display the sum of the 
values of each row and each coulmn as follows 

                            |Row Sum
        1.0 2.0 3.0 4.0 5.0 | 15.0 
        2.0 3.0 1.0 1.0 2.0 | 9.0
coulmn _____________________
sum    3.0  5.0 4.0 5.0 7.0     

Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user (No test cases) 
__________________________________________________________________________*/

#include <iostream>
#include<math.h>
#include<string>
using namespace std;

/*  */

int main()
{ 
  double _array[2][5];
  double sum1=0 ,sum2=0;

 cout<<"Fill the array ";
 for (int i = 0 ;  i<2 ; i++)
     {
       for(int j = 0 ; j<5 ; j++)
       {cin>>_array[i][j];}
     }
 
 for (int i = 0 ;  i<2 ; i++)
     {
       for(int j = 0 ; j<5 ; j++)
       {cout<<_array[i][j]<<"  "; 
        sum1+=_array[i][j];
       }
       cout<<"|"<<sum1<<"\n";
       sum1=0;
     }
    
 
 for (int i = 0 ;  i<5 ; i++)
     {
       for(int j = 0 ; j<2 ; j++)
       {
        sum2+=_array[j][i];
        
       }
       cout<<sum2<<"  ";
       sum2=0;
     }   


return 0;
}
