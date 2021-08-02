 //Arrays  1  1/3                            

/* assume an array of integer contain n elements given an integer value k write code  to return how many times value of k in the array   

Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user (No test cases) 
__________________________________________________________________________*/

#include <iostream>
#include<math.h>
#include<string>
using namespace std;

/*  */

int main()
{
  int n , k , sum=0 ;

  cout<<"enter the size of array \n";
  cin>>n;
  
  cout<<"fill your array \n";
  int arr[n] ;
  
  for(int i=0 ; i<n ;i++)
    {
      cin>>arr[i];
    }

  cout<<" enter the value you need to konw number of it in array ";
  cin>>k;

  for(int j = 0 ; j<n ; j++)
     {
       if(arr[j]==k)
         {sum++;} 
     } 

    cout<<"number of Value nedded equal "<<sum<<"\n";

return 0;
}
