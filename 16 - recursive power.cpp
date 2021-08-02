////// recursive function  16 

/*  write a recursive function to find 
x^y
x^-y 



Note : i just code the algorithm to solve the proplem i dont take care about
the validation and the input errors of the user (No test cases)
__________________________________________________________________________*/

//factorial recursive function  


#include<iostream>
using namespace std;

double power(double n ,double  N);
double invpower(double n , double _N);


int main(){

double n , N , _N ;
cout<<"enter the base number";
cin>>n;
cout<<"enter the postive power";
cin>>N;
cout<<"enter the negative  power";
cin>>_N;

cout<<n<<" power "<< N<<" = "<<   power(n, N)<<"\n";
cout<<n<<" power "<<_N<<" = "<<invpower(n,_N)<<"\n";


return 0;
}

double power (double n , double N){
  if(N==1)
  return n;
  else 
  return n*power(n,N-1) ;


}

double invpower(double n , double _N){


  if(_N==-1)
  return 1.0/n;
  else 
  return (1.0 / n ) * power(n,_N+1) ;


}
