////// recursive function  15  

/*  write a recursive function to find n! for all numbers 



Note : i just code the algorithm to solve the proplem i dont take care about
the validation and the input errors of the user (No test cases)
__________________________________________________________________________*/

//factorial recursive function  


#include<iostream>
using namespace std;

int factorial(int n);


int main(){

int n ;
cout<<"enter your value ";
cin>>n;
cout<<factorial(n);

return 0;
}

int factorial(int n)
{
  if (n==1)
  return 1;
  else
  return n*factorial(n-1);

}