 //Arrays  1  1/3                            

/* write a program of 1D array of type double named data with a maximum number of elemetns is 20 of the user enter a larger number tell him taht max is 20 and store the data in array and compute mean of data and deviation 

mean = (sum of elemnts)/(number of elements )

deviation = sqrt((sum of elemnts squared / number od elements) - mean) 

^^^^^
the last rule about deviation in the sheet is not true  i put it as the sheet put mathmaticaly is not true 


display them and display the larger and the smallest element  then ask the user of he want to repeat the program 

 

Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user (No test cases) 
__________________________________________________________________________*/

#include <iostream>
#include<math.h>
#include<string>
using namespace std;

/*  */



int main()
{
   int x =0 ;
  do
  {
    
    int n , arr[n] ,  max , min , sum , sum_square ;
    double mean , dev ; 
    
    char repeat ;
    int xx = 0 ;
    
    
   
    do{
        cout<<"enter size of element max 20 element \n";
        cin>>n;
      if(n<1 || n>20 )
       {
        cout<<"you should put size n from 1 to 20  ";
        xx=1;
       }
       else
       {xx=0; break;}
     }while(xx=1);
   
     cout<<"Enter Your "<<n<<" numbers \n"; 
   for(int i = 0 ; i<n ; i++)
      {
        cin>>arr[i];

      }
      max=arr[0];
      min=arr[0];
      sum=0;
      sum_square=0;
      for(int j = 0 ; j<n ; j++)
      {
        if(arr[j]>max)
          {max=arr[j];}
         
         if(arr[j]<min)
         {min=arr[j];} 

         sum+=arr[j];

         sum_square+=pow(arr[j],2);
      }

      mean = sum / n ; 

      dev = sqrt((sum_square/n) - pow(mean,2));
      
     
      cout<<"mean      equal  "<<mean<<"\n";
      cout<<"deviation equal  "<<dev <<"\n";
      cout<<"Maximum   equal  "<<max <<"\n";
      cout<<"minimum   equal  "<<min <<"\n";
      cout<<"sum       equal  "<<sum <<"\n";
      cout<<"sum^2     equal  "<<sum_square <<"\n";
  cout<<"press Y to repeat the program  or N to close it ! \n";
  cin>>repeat;
  if(repeat=='Y'||repeat=='y')
     {x = 1;}
    else
     {x = 0;}

  }while(x==1); 

return 0;
}
