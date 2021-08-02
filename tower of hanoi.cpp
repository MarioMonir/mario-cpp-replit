

#include <iostream>
#include<stdio.h>
#include <string.h>
#include<ctype.h>

using namespace std;


//   n numbers of disks , from rod is the first rod 
//   to rod is the last ,  aux rod is the middle rod 

void towerOfhanoi( int n , char from_rod ,char to_rod, char aux_rod );
string isPrime(int n , int i);


int main(){
   towerOfhanoi(3 , 'A' , 'C' , 'B' );
   
  cout<<"_____________________________\n" ;

   cout<<isPrime(10,2)<<"\n";
   cout<<isPrime(3,2)<<"\n";
   cout<<isPrime(5,2)<<"\n";
   cout<<isPrime(11,2)<<"\n";
   cout<<isPrime(13,2)<<"\n";
   cout<<isPrime(15,2)<<"\n";
   cout<<isPrime(21,2)<<"\n";

  return 0; 
}

void towerOfhanoi(int n , char from_rod ,char to_rod, char aux_rod)

{

  if (n==1)
  { 
    cout<<"move disk 1 from " <<from_rod<<"  to " <<to_rod<<"\n";
    return ;
  }
    towerOfhanoi(n-1 , from_rod , aux_rod  , to_rod);
    cout<<"move disk "<<n<< " from " <<from_rod<<"  to " <<to_rod<<"\n";
    towerOfhanoi(n-1 , aux_rod , to_rod , from_rod);
    //                   B         c        a
}

string isPrime(int n , int  i )
{
    if(i==n)
     {return "prime";}
    
    if(n==2)
    {return " prime ";}

   if (n%2==0)
    {return "not  prime";}

   if(n%i==0)
     {return "not prime";}

    return isPrime(n, i+1);
}