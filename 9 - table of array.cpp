 //Arrays  1  1/3                            

/*  define a function named table  that takes as input argument an array of type double and displays a table of the data and their absolute values and their squares , the out put be as following 

__________________________________________
X                 |X|              X^2
__________________________________________
-2                 2                4             
.                  .                .
.                  .                .

__________________________________________

Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user (No test cases) 
__________________________________________________________________________*/

#include <iostream>
#include<math.h>
#include<string>
using namespace std;

/*  */

void table (int n ,  double arr[] );  

int main()
{

int n ;
cout<<"enter your array size ";
cin>>n;

double arr[n];
cout<<"fill your array " ; 

  for(int i = 0 ; i<n ; i++)
   {
     cin>>arr[i];
   }
   
  table(n,arr);  


return 0;
}

void table (int n ,  double arr[])
{

cout<<"__________________________________________\n";
cout<<"  X               |x|             X^2       ";
cout<<"__________________________________________\n";

for(int j=0 ; j<n ; j++)
  {
    
      cout<<" "<<arr[j]<<"                "<< abs (arr[j])<<"                "<<arr[j]*arr[j]<<"\n";
     
  }
  cout<<"\n__________________________________________\n";

  return;

}