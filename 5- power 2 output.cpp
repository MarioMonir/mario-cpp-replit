 //lap zero  5

/* write a program produces this output
0   1
1   2
2   4
3   8
4   16
5   32
6   64
Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user (No test cases) 
__________________________________________________________________________*/

#include <iostream>
#include<math.h>
using namespace std; 
int main()
{
   for(int i = 0 ; i<=6 ; i++ )
       {
         cout<<i<<"\t\t"<<pow(2,i)<<"\n";
       }
}

