//// Arrays  12   Very hard Code 

/* write  a program to multiply n*n matrix (Squares only )




Note : i just code the algorithm to solve the proplem i dont take care about
the validation and the input errors of the user (No test cases)
__________________________________________________________________________*/



// multiply 2 matricies n*n 

#include <iostream>
#include <cstring>
#include <math.h>
#include <string.h>
using namespace std;


int main() {

cout<<"Enter size of matricies   \n";
int n ;
cin>>n;
int m1[n][n] , m2[n][n] ;

cout<<"Fill your First Matrix    \n";
for(int i = 0 ; i<n ; i++)
   {
     for(int j = 0 ; j < n ; j++ )
        {cin>>m1[i][j];}
   } 
cout<<"Fill your Second  Matrix   \n";
for(int i = 0 ; i<n ; i++)
   {
     for(int j = 0 ; j < n ; j++ )
       {cin>>m2[i][j];}   
   }
   
  cout<<"\n\n"; 
cout<<"The first Matrix   \n";
for(int i = 0 ; i<n ; i++)
   {
     for(int j = 0 ; j < n ; j++ )
        {cout<<m1[i][j];}
        cout<<"\n";
   } 
cout<<"\n\n";
cout<<"The Second Matrix   \n";
for(int i = 0 ; i<n ; i++)
   {
     for(int j = 0 ; j < n ; j++ )
       {cout<<m2[i][j];} 
        cout<<"\n";  
   }
cout<<"\n\n";



for (int r = 0 ; r<n ; r++)
{
   for(int c = 0 ; c<n ; c++ )
    { 
      int sum = 0 ;
       for(int x = 0 ; x<n ; x++ )
       {
            sum+=( m1[r][x] * m2[x][c]);
           
       }  cout<<sum<<"  "; 
    }  cout<<"\n\n";      
}        


// 2  1021  54-51   

return 0;
}