////// recursive function  19

/*  write a recursive function to calculte sum of array recurivly



Note : i just code the algorithm to solve the proplem i dont take care about
the validation and the input errors of the user (No test cases)
__________________________________________________________________________*/

// summ of array elements recursivley

#include <iostream>
using namespace std;


int sum(int arr[] , int start , int end );

int main(){

int arr[5]={1,2,3,4,5};

cout<<sum(arr, 0 , 5 )<<"\n";
cout<<sum(arr, 0 , 4 )<<"\n";
cout<<sum(arr, 0 , 3 )<<"\n";
cout<<sum(arr, 0 , 2 )<<"\n";
cout<<sum(arr, 1 , 5 )<<"\n";
cout<<sum(arr, 2 , 5 )<<"\n";
cout<<sum(arr, 3 , 5 )<<"\n";
cout<<sum(arr, 4 , 5 )<<"\n";
  return 0; 
}

int sum(int arr[] , int start , int end ){
  int result=0 ;
  if(start==end){
  return result;
}else
{
  return result+=(arr[start] + sum(arr, start+1 , end ));

}


}