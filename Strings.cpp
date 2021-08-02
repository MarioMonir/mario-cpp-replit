// Strings 

#include <iostream>
#include<stdio.h>
#include <string.h>
#include<ctype.h>

using namespace std;

int main(){

char s1[100] = {'h', 'e' , 'l' , 'l' , 'o'};
char s2[100] = {'w', 'o' , 'r' , 'l' , 'd'};
char s3[100] = {'m', 'a' , 'r' , 'i' , 'o'};
char s4[100] = {'m', 'o' , 'n' , 'i' , 'r'};
cout<<"S1 :  ";
for(int i = 0 ; i < 5 ; i ++)
   {
     cout<<s1[i];
   }  
    cout<<"\n";
    cout<<"S2 :  "<<s2<<"\n";  
    cout<<"S3 :  "<<s3<<"\n"; 
    cout<<"S4 :  "<<s4<<"\n"; 
  cout<<"_________________________________\n";
  cout<<"Length of s1 = "<<strlen(s1)<<"\n";        // gets the length of the string

 cout<<"_________________________________\n";

  cout<<"S2 :  "<<s2<<"\n";  
  strcpy(s2 , s1);               // copy s2 into s1
  cout<<"S2 :  "<<s2<<"\n";  

 cout<<"_________________________________\n";
 

 cout<<strcat(s3,s4)<<"\n";   // it appends s2 to s1 

 cout<<"_________________________________\n";

 cout<<strrev(s1);
 cout<<"S1 :  "<<s1<<"\n";            // get the reverse of the array 
 cout<<"_________________________________\n";


cout<<strupr(s1)<<"\n";



  return 0; 
}
