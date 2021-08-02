 //structure  1  1/1                 # sorry the code is not clean                        

/* write a dunction to multiply_complex and divide_complex to implement multiplication as follows :
      multiply -->   (a+bi)x(c+di) = (ac-bd)+(ad+bc)i
      divide ---->   (a+bi)/(c+di) = [(ac+bd)/(c*c+d*d)]  + [(bd-ad)i/(c*c=d*d)]


Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user (No test cases) 
__________________________________________________________________________*/

#include<sstream>
#include <iostream>
#include<math.h>
#include<string>
using namespace std;

struct Complex
{
  int  real;
  int Imaginary;
  
};
 
string multiply( Complex complex_number1 , Complex complex_number2); 
string   divide( Complex complex_number1 , Complex complex_number2);

int main()
{
  Complex complex_number1 ;
  Complex complex_number2 ;
  
  cout<<"enter       real part of first complex number ";
  cin>>complex_number1.real;
  
  cout<<"enter  Imaginary part of first complex number "; 
  cin>>complex_number1.Imaginary;
  
  cout<<"\n\n";
  
  cout<<"enter     real part of second  complex number ";
  cin>>complex_number2.real;
  
  cout<<"enter Imaginary part of second complex number "; 
  cin>>complex_number2.Imaginary;
  
  
  cout<<"\n"<<complex_number1.real<<" + "<<complex_number1.Imaginary<<"i * "<<complex_number2.real<<" + "<<complex_number2.Imaginary<<"i\n";
  cout<<"\n"<<complex_number1.real<<" + "<<complex_number1.Imaginary<<"i / "<<complex_number2.real<<" + "<<complex_number2.Imaginary<<"i\n";
  
  
  
  cout<<"\n ";
  cout<<"Multiplication is "<<multiply(complex_number1 , complex_number2);
  cout<<"\n ";
  cout<<"division       is " <<divide(complex_number1,complex_number2);
  

return 0;

}

string multiply( Complex complex_number1 , Complex complex_number2)
{
   // to_string is a build in function change cahnge data type to string ( casting to string)
   
  string result_real = to_string((complex_number1.real*complex_number2.real)-(complex_number1.Imaginary*complex_number2.Imaginary)) ;
  
  string result_imaginary = to_string((complex_number1.real*complex_number2.Imaginary)+ (complex_number1.Imaginary*complex_number2.real));
   
  
   return   result_real+" + "+result_imaginary+" i\n"; 

}  

string divide( Complex complex_number1 , Complex complex_number2)
{
   
 
  string Result_real = to_string( ((complex_number1.real*complex_number2.real)+(complex_number1.Imaginary*complex_number2.Imaginary)) / (pow(complex_number2.real,2)+pow(complex_number2.Imaginary,2)) );
  
  string Result_imaginary = to_string( ((complex_number1.Imaginary*complex_number2.real)- (complex_number1.real * complex_number2.Imaginary) ) / (pow(complex_number2.real,2)+pow(complex_number2.Imaginary,2)));
  
  return Result_real+" + "+ Result_imaginary+" i\n"; 
}