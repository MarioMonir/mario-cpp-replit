////// recursive function  17 

/*  write a recursive function to print array of element 
 



Note : i just code the algorithm to solve the proplem i dont take care about
the validation and the input errors of the user (No test cases)
__________________________________________________________________________*/

//print recursive 


#include<iostream>
using namespace std;

void print_arr( int arr[] , int start , int end );

int main()
{
  int arr[5]={1,2,3,4,5};


 print_arr(arr,0,5);
 cout<<"\n";
 print_arr(arr,1,5);
  cout<<"\n";
 print_arr(arr,2,5); 
  cout<<"\n";
 print_arr(arr,3,5);
  cout<<"\n";
 print_arr(arr,4,5);
 cout<<"\n";
 print_arr(arr,5,5);
  return  0;


}

void print_arr( int arr[] , int start , int end )
  {
   if (start==end)
    {return ;}

  cout<<arr[start]<<"  ";
  start++;
  print_arr(arr,start,end);

}