// Pointers
#include <iostream>
#include <cstring>
#include <math.h>
#include <string.h>
#include<stdio.h>
using namespace std;


//_______________________________________Lectures____________________________
//functions
void double_it(int x, int *p);
void swap_it(int &a , int &b);


int main() {


 cout << "__________________________Pointers_________________________\n\n";

  // pointer is faster and use less memory
  // memory ----> Location ----> address
  //   &    ----> address of variable 
  // pointer is such a varibale that stores the address of another variable 


 //_________________________________________________________________________

//                        discription of pointer output
 
  int z = 3;
  int *p = &z;

  cout <<  p << "\n";  // value of p that is a pointer  (address)       | 0x7ffce156a5d4
  cout << *p << "\n"; // value pointed by variable p (value of z)       | 3
  cout << &z << "\n"; // gets the adress of z (wich is the pointer p)   | 0x7ffce156a5d4
  cout << z  << "\n";  // gets the value of z  (value of z )            | 3

  int a = 5;
  double_it(9, &a); // a gets the value of 2*9  instead of 16
  cout << a;      // a is now as a pointer carry value 2*x              | 18
  cout << &a << "\n";
  cout << a << "\n\n\n";

  cout << "_____________________________________________________________\n\n";


  int m = 1, n = 2, k = 3;
  int *p1 = &m;
  cout << *p1 << "\n";          //                                      | 1
  int *p2 = &n;
  cout << *p2 << "\n";          //                                      | 2
  int *p3 = &k;
  cout << *p3 << "\n";          //                                      | 3
              
  p2 = p1;   // p2 points to value pointed by p1 (p2 --> m)
  n = *p3;   // store the value pointed by p3 in var n   (n=k=3)
  *p2 = *p3; // store the value pointed by p3 also in p2 (m=3)

  // p1 , p2 pointing to m wich is equal 3
  // p3 point to k wich is wual 3
  // n = 3 and has no pointer on it

  cout << "\n" << m << " " << n << " " << k << "\n";          //      | 3 3 3
  cout << "\n" << *p1 << " " << *p2 << " " << *p3 << "\n\n";  //      | 3 3 3


  cout << "_____________________________________________________________\n\n";



//                               increment diffrence  

 int Q=35;
 int *POINTER = &Q;

  cout<<"The value of  (POINTER)    is "<<(POINTER)    <<"\n"; 
  cout<<"The value of *(POINTER++)  is "<<(POINTER++)  <<"\n"; 
  cout<<"The value of  *POINTER++   is "<<POINTER++    <<"\n";
  cout<<"The value of *(POINtER)++  is "<<(POINTER)++  <<"\n";


  cout << "_____________________________________________________________\n\n";



//                  * and & are inverse and the cancel each other

  int c = 1;
  int *po = &c;

  cout << &*po
     << "\n"; // it print the refrence as printing po                |0x7ffef72d6620
  cout << *&po
     << "\n"; // it print the refrence as printing po                |0x7ffef72d6620
  cout << "\n\n";

  cout << "____________________________________________________________\n\n";


  int x = 7;
  int *xptr = &x;

  cout << "The address of a is      " << &a << "\n";
  cout << "The value of the xptr is " << xptr << "\n\n";

  cout << "The value of x is      " << x << "\n";
  cout << "The value of *xptr is  " << *xptr << "\n\n";

  cout << "showing that * and & are inverse \n";
  cout << "The value of *&xptr is  " << *&xptr << "\n";
  cout << "The value of &*xptr is  " << &*xptr << "\n\n";

  cout << "____________________________________________________________\n\n";

  cout<<"Swaping function passed by refrence '\n";
  int A = 1;
  int B = 2;

  cout<<"first  value is "<<A<<"\n";
  cout<<"second value is "<<B<<"\n";

  swap_it(A,B);
  cout<<"\n After swap \n\n";

  cout<<"first  value is "<<A<<"\n";
  cout<<"second value is "<<B<<"\n\n";  

  cout << "____________________________________________________________\n\n";

  
//                    Array Name is a Pointer Constant 

  int arr[5]={1,2,0,4,5};
  cout<<"The value   of arr    "<< arr   <<"\n\n";  //as pointer     |0x7ffdfe143300

  cout<<"The address of arr[0] "<<&arr[0]<<"\n"; //address of 1st    |0x7ffdfe143300
  cout<<"The address of arr[1] "<<&arr[1]<<"\n"; //address of 2nd    |0x7ffdfe143304
  cout<<"The address of arr[2] "<<&arr[2]<<"\n"; //address of 3rd    |0x7ffdfe143308
  cout<<"The address of arr[3] "<<&arr[3]<<"\n"; //address of 4th    |0x7ffdfe14330c
  cout<<"The address of arr[4] "<<&arr[4]<<"\n"; //address of 5th    |0x7ffdfe143310

  cout<<"\n\n";


 
  cout<<"The value of *arr      = "<<*arr     <<"\n";      //           |
  cout<<"The value of *(arr+1)  = "<<*(arr+1)<<"\n";      //           |
  cout<<"The value of *(arr+2)  = "<<*(arr+2)<<"\n";      //           |
  cout<<"The value of *(arr+3)  = "<<*(arr+3)<<"\n";      //           |
  cout<<"The value of *(arr+4)  = "<<*(arr+4)<<"\n";      //           |
   

 cout << "____________________________________________________________\n\n";  
 
 // Diplay array looped by pointer

 char ar[5]={'M','A','R','I','O'};

  cout<<"\ndisplay array looped  by pointer \n\n";

  for(char *index = &(ar[0]) ; index <= &(ar[4]) ; index++ ){

    cout<<"["<<*index<<"]\n" ;
  }

 

 cout << "____________________________________________________________\n\n";


//                    finding the min number of array by pointer

  int Arr[5]={1,2,0,4,-5};

  int *min    = &(Arr[0]);
  int *walker = &(Arr[1]);

  // while the address of walker <= address of last  member   of  the array Arr[4]
  // or    the address of walker <  address of first member after the array Arr[5]
  while(walker<=(&Arr[4])){    

    if (*walker<*min){
       min = walker;
    }
    walker++;
  }  
  cout<<"The minimum number is "<<*min<<"\n";       //               |0x


 cout << "____________________________________________________________\n\n";



 int ax[5]={1,3,5,7,9};
 int *P = ax;

 cout<<"The value of ax[0]  is  "<<*ax<<"\n";

 // other pointer  i decalre point to the start of the array too
 cout<<"The value of ax[0]  is  "<<*P<<"\n\n";   


 cout << "____________________________________________________________\n\n\n\n";






 cout << "_________________________Find_The_output1____________________\n\n";


//                                find the output1 

 int X1=1 , Y1 = 2 ;
 int *P1 =&X1 ,*P2=&Y1;
 (*P1)++;                 //X1 = 1++ =2
 (*P2)--;                 //Y1 = 2-- =1
 (*P1)=(*P2)*2;           //X1 = 1*2 =2                             
 (*P2)=(*P1)+7;           //Y1  =2+7 =9

 cout<<"X1 equal  "<<X1<<"\n";                              //        |2
 cout<<"Y1 equal  "<<Y1<<"\n";                              //        |9


 cout << "_____________________________________________________________\n\n\n\n";


 cout << "_________________________Find_The_output2____________________\n\n";


//                                find the output2  
 int e=5 ,r=7, t=2 ;
 int *E=&e ,*R=&r , *T=&t ;
 (*E)=(*E)+5;              //e = 5+5  = 10
 (*R)=(*E)*2;              //r = 10*2 = 20
 (*T)=(*R)-(*E);           //t =20-10 = 10                             


 cout<<"e equal  "<<e<<"\n";                              //        |10
 cout<<"r equal  "<<r<<"\n";                              //        |20
 cout<<"t equal  "<<t<<"\n";                              //        |10

 cout << "_____________________________________________________________\n\n\n\n";


//                       using pointers to allocate memory 
 
 int *Pointer = new int ;
 *Pointer = 72;
 cout<< Pointer<<"\n";
 cout<<*Pointer<<"\n";

 cout << "_____________________________________________________________\n\n";

//           Null pointer whose value is Null that does not store address 



 cout << "_____________________________________________________________\n\n";

 cout << "_______________________Dynamic_objects_______________________\n\n";


//                                dynaimc objects 
  
  //  dynamic pointers 

  int *pointer = new int ;

  *pointer = 10 ;

  cout<<"The value of pointer is  "<<*pointer<<"\n";     
 
  delete pointer; 

 cout<<"The value of pointer is  "<<*pointer<<"\n";

cout << "____________________________________________________________\n\n";

//  dynamic array
   //  it is working but need input you can try it alone 
   /*

      int i = 5;
  int * p;
  cout << "How many numbers would you like to type? ";
  cin >> i;
  p= new (nothrow) int[i];
  if (p == nullptr)
    cout << "Error: memory could not be allocated";
  else
  {
    for (int n=0; n<i; n++)
    {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "You have entered: ";
    for (int n=0; n<i; n++)
      cout << p[n] << ", ";

    delete[] p;

    cout<<"\n\n";
    for (int n=0; n<i; n++)
      cout << p[n] << ", ";
  }


   */

   cout << "____________________________________________________________\n\n";

//                                     sorting 
//                                   bubble sort 
  int arrz [10] = {10,0,30,3,50,6310,70,80,34,55};
  for (int i = 0 ; i<9 ; i++ )
     for(int j = i+1 ; j <10 ; j++ )
     {
       int t ;
        if(arrz[i]>arrz[j])
       {
         t = arrz[i];
        arrz[i]=arrz[j];
        arrz[j]=t;
       }
                   
      }
    cout<<"Bubble Sort \n";
       for(int i = 0 ; i<10 ; i++)
       { 
         cout<<arrz[i]<<"  ";
          
       }
     cout << "____________________________________________________________\n\n";   
 
//                                  insertion sort

  cout<<"Insertion Sort \n";
     int j , key ;
     int ars[10]={10,0,30,3,50,6310,70,80,34,55};
      for(int i = 0 ; i < 10 ; i++)
      {
        key=ars[i];
        j=i-1;
        while(j>=0 && ars[j] > key )
           {
             ars[j+1] = ars[j];
             j=j-1;
           }
            ars[j+1]=key;
      }
     for (int i = 0 ; i < 10 ; i++) 
     {cout<<ars[i]<<"  ";}
      cout<<"\n";

    cout << "____________________________________________________________\n\n";




//                         dynamic allocation for 1-d array 

  // cout << "____________________________________________________________\n\n";

//________________________________________________________________________________


cout<<"_______________________________SHEETS__________________________\n\n";
 

//poniters and function sheet 

//1 state the effect of each of the following
  int _a,_b,_c ;
  int *a1=&_a , *b2 ;
  _a=5;
  b2=a1;
  *b2=*b2 * 3;
  _c= *a1 ;
  _b=_c;
  cout<<_a<<" "<<_b<<" "<<_c;



    cout << "____________________________________________________________\n\n";
 
 
// 2 find the error(s) in the following program segment ;
   /*
     char aRr[4] = "abc";
     char *_P; float *fprt , g;  
     g=4.0;
     *fprt=3;
     g+=*fprt;
     cout<<g;
     strcpy(_p,"abcde");
     puts(aRr);

   */
   
   
    char aRr[4] = "abc";
    char _p[10] ;          // edited here 
    float *fprt ;
    float g;  
    g=4.0;
    *fprt=3;
    g+=*fprt;
    cout<<g;
    cout<<strcpy(_p,"abcde");
    puts(aRr);

     // in the context of the declaration 
     /*
        float table[10];
        float *pt , *qt ;
        what is the effect of the following statements ?
        
          a-pt=tables;
          *pt=0;
          *(pt+2)=3.14

          b-pt = table+2 
            qt=pt;
            *qt=2.178;

          c-pt table;
            qt=table+10;
            for(int i = 0 ; pt < qt ; pt++)
    */  

        float table[10];
        float *pt , *qt ;
       // what is the effect of the following statements ?
        
          pt=table;
          *pt=0;
          *(pt+2)=3.14;
          cout<<"pt =  "<<pt<<"\n";
          cout<<"qt =  "<<qt<<"\n";

            pt = table+2 ;
            qt=pt;
            *qt=2.178;
           cout<<"pt =  "<<pt<<"\n";
           cout<<"qt =  "<<qt<<"\n";

        /*   
          this part are not working it crashes 

           pt=table;                       
           qt= (table+10);
           for(int i = 0 ; pt < qt ; pt++)
           {*pt=i;}
           cout<<"pt =  "<<pt<<"\n";
          cout<<"qt =  "<<qt<<"\n";
        */

        cout << "____________________________________________________________\n\n";   

//the function of power and factorial will find them in the file of recursion 
   
//6 trace the following

     
     





  return 0;


}


//___________________________________________________________________________________________________________




// double function
void double_it(int x, int *p) {
  *p = 2 * x;
}

//swap function
void swap_it(int &A , int &B ){  // if you dont pass by refrence it wil error
  int temp;
  temp=A;
  A=B;
  B=temp;
}