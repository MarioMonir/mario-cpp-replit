//  Recursion 
 
 // Recursion is The GEnral concept of loop 
 // Recursive function is the function that can call it self 
 // recursive function must to have a stoppinc conditio (to avoid stack over flow )

#include <iostream>
#include <cstring>
#include <math.h>
#include <string.h>
using namespace std;

//Recursive Functions
int mult(int a , int b );                    // Recursive multiplication of two numbers
int power(int m , int n );                   // Recursive power function  
 double factorial(int N);                    // Recursive Factorial function
 double combination(int n1 , int  r);        // Recursive Combination function
 int    fibonacci (int f );                  // Recursive Fibonacci function 
 //string prime(int p , int i);              // Recursive prime function     



 
int main() {
  
  
// Recursive multiplication of two numbers
  cout<<"3 * 5 = "<<mult(3,5)<<"\n";
  cout<<"5 * 7 = "<<mult(5,7)<<"\n";
  cout<<"8 * 7 = "<<mult(8,7)<<"\n";
  cout<<"9 * 8 = "<<mult(9,8)<<"\n";
    
 cout<<"_____________________________________\n\n";    

// Recursive power function 
 cout<<"2^2 = "<<power(2,2)<<"\n";
 cout<<"3^2 = "<<power(3,2)<<"\n";
 cout<<"4^4 = "<<power(4,4)<<"\n";
 cout<<"9^2 = "<<power(9,2)<<"\n";
 cout<<"_____________________________________\n\n"; 

// Recursive Factorial function
 cout<<"factorial 3 = "<<factorial(3)<<"\n";
 cout<<"factorial 5 = "<<factorial(5)<<"\n";
 cout<<"factorial 7 = "<<factorial(7)<<"\n";
 cout<<"factorial 10 = "<<factorial(10)<<"\n";
 cout<<"_____________________________________\n\n"; 

// Recursive Combination function 
 cout<<"combination(3,2)  equal "<<combination(3,2)<<"\n"; 
 cout<<"combination(5,2)  equal "<<combination(5,2)<<"\n";
 cout<<"combination(7,4)  equal "<<combination(7,4)<<"\n";
 cout<<"combination(10,3) equal "<<combination(10,3)<<"\n";

 cout<<"_____________________________________\n\n"; 

// Recursive Fibonacci function 
 cout<<"fibonacci function to 2 is "<<fibonacci(2)<<"\n";
 cout<<"fibonacci function to 3 is "<<fibonacci(3)<<"\n";
 cout<<"fibonacci function to 4 is "<<fibonacci(4)<<"\n";
 cout<<"fibonacci function to 5 is "<<fibonacci(5)<<"\n";
 cout<<"fibonacci function to 6 is "<<fibonacci(6)<<"\n";
 cout<<"fibonacci function to 7 is "<<fibonacci(7)<<"\n";
 cout<<"fibonacci function to 8 is "<<fibonacci(8)<<"\n";
 cout<<"fibonacci function to 9 is "<<fibonacci(9)<<"\n";

   /* fiboonachio as a series from 0 to 20 
     for(int i = 0 ; i < 20 ; i++ )
        {cout<<fibonacci(i)<<"    ";  } 
   */
 cout<<"_____________________________________\n\n"; 







// Recursive prime function
 /* int p;
  int i = p-1 ;
 cout<<"number 2  is "<<prime(2,i)<<"\n";
 cout<<"number 3  is "<<prime(3,i)<<"\n"; 
 cout<<"number 4  is "<<prime(4,i)<<"\n";
 cout<<"number 5  is "<<prime(5,i)<<"\n";
 cout<<"number 7  is "<<prime(7,i)<<"\n"; 
 cout<<"number 11 is "<<prime(11,i)<<"\n";
 cout<<"number 13 is "<<prime(13,i)<<"\n";
 cout<<"number 17 is "<<prime(17,i)<<"\n"; 
 cout<<"number 21 is "<<prime(21,i)<<"\n"; 


 */
return 0;
}



int mult(int a , int b ){                
     if(b==1)                            //Ex. mult(3,2)
     return a;                           //           3 + mult(3,1)
    else if(b>1)                         //                 3 + return 3      
    return (a + mult(a,b-1));            //                             3+3  
 } 

int power(int m , int n){
  int result=0;                          // Ex. power(2,2)
  if (n==1){                             //            2*pow(2.1)    
  result = 1 ;                           //                 2*return 1
  }else if (n>0){                        //                         2 * 2
  result= m* power(m,n-1);
  }
 
 }
double factorial(int N){
 if(N == 1)                             
 return 1;                                
                                       
 else if(N>1)
 return N * (factorial(N-1));
 
 }


double combination(int n1 , int  r){ 
     return  (factorial(n1)) / (factorial(r) * (factorial(n1-r))) ;

 } 

int fibonacci (int f ){
  
  if(f==0)
  return 1; 

  if(f>1)
  
  return fibonacci(f-1)+fibonacci(f-2);
 

  if (f=1)
  return 1 ;

 }
 
 /*
string prime(int p  , int i  ){

 if(p>2)
 {
  
  if(p%2==0)
  return " Not Prime" ;

  if (p% i!=0 ){
      prime(p , i-1);
 
 }else if(i==1)
       return "Prime";
 



  }else if(p==2){
  return "2 is a prime number ";

  }else if(p==1){
  return "1 is not prime number  ";
 
  }else if (p<2){
  return "you should give a number bigger than  2 ";
  }
  

}  
*/