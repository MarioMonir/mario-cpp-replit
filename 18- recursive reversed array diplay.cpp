////// recursive function  18 

/*  write a recursive function to print array of element reversed 
 



Note : i just code the algorithm to solve the proplem i dont take care about
the validation and the input errors of the user (No test cases)
__________________________________________________________________________*/

//print recursive  reversed 


#include<iostream>
using namespace std;

void print_arr( int arr[] , int end  );

int main()
{
  int arr[5]={1,2,3,4,5};



 print_arr(arr,4);
  cout<<"\n";
 print_arr(arr,3); 
  cout<<"\n";
 print_arr(arr,2);
  cout<<"\n";
 print_arr(arr,1);
 cout<<"\n";
 print_arr(arr,0);
  cout<<"\n";

  return  0;


}

void print_arr( int arr[] , int end  )
  {
   if (end < 0)
    {return ;}

  cout<<arr[end]<<"  ";
  end--;
  print_arr(arr,end);

}