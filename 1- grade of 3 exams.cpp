 //lap zero 

/*write a program that asks a student for his grade out of 100 in 3 exams and then print out his final grade out of 100 given that weight of the first exam is 30% the second is 30% and third is 40% 
____________________________________________________________________________*/

#include <iostream>
using namespace std;

float final_grade(float exams[3]);
 
int main()
{
  
  float exams[3];
  
  cout<<"Enter the grade of each exam out of 100  \n";
  
  for(int i = 0 ; i<3; i++ )
      {
        cout<<"The grade of Exam "<<i+1<<" is "; 
        cin>>exams[i];
        
      }
      
  cout<<final_grade(exams);

return 0;	
}

float final_grade(float exams[])
{
  
  float Final_Grade = (exams[0]*0.30)+(exams[1]*0.30)+(exams[2]*0.40) ;
  
  return Final_Grade;
}