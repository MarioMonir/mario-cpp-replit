 //structure  2  1/1                            

/* write a program that will store teh personal details for such as first name , middle name , lastname , social security number , age , date of birth and address  of the employees in a small firm 


Note : i just code the algorithm to solve the proplem i dont take care about      the validation and the input errors of the user (No test cases) 
__________________________________________________________________________*/

#include <iostream>
#include<math.h>
#include<string>
using namespace std;

struct employees 
{
 string    fname;
 string    mname;
 string    lname;
 int         ssn;
 int         age;
 string    birth;
 string  address;
  
};

int main()
{

 int n ;
 cout<<"enter number of employees";
 cin>>n;

 employees arr[n];

 for(int i = 0 ; i < n ; i++)
  {
    cout<<"firstname , lastname, social security number, age , birth, address";
    cin>>arr[n].fname;
    cin>>arr[n].mname;
    cin>>arr[n].lname;
    cin>>arr[n].ssn;
    cin>>arr[n].age;
    cin>>arr[n].birth;
    cin>>arr[n].address;
 }

 for(int i = 0 ; i < n ; i++)
  {
  
    cout<<arr[n].fname;
    cout<<arr[n].mname;
    cout<<arr[n].lname;
    cout<<arr[n].ssn;
    cout<<arr[n].age;
    cout<<arr[n].birth;
    cout<<arr[n].address;
   
 }


return 0;

}