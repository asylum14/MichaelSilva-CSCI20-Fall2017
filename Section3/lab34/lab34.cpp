 // Read in a series of grades, terminated by a -1. // Then output the average and minimum of those grades.  
 #include <iostream>  
 using namespace std;  
 int main() {          
     // Declare variables         
     double count=0;         
     double total=0;         
     int minimum=100;   //##should start off as the max possible so that it can change appropriately       
                        //##if it started at zero the number would never change because zero is the lowest it can be
     int grade=0;         
     // Read numbers in until we see the -1         
     // Sum up grades as we do, and look for minimum        
         
     while (grade != -1) {       
         cin >> grade;  //##shouldn't this line be moved in the while loop       
         total = total + grade;                
         count = count+1;                
         if (grade < minimum && grade>=0) {//##grade shouldn't be less then zero also                         
             minimum = grade;                
             
         }         
         
     }          
     // Output results         
     double average = (total+1)/ (count-1);    //## subtract 1 from count to stop it from counting the negative 1     
                                              //## also add one to total to stop the negative 1 from taking away from total 
     cout << "Average was " << average << endl;         
     cout << "Minimum was " << minimum << endl;         
     return 0; 
     
 }

 

//Correct output

//97 92 86 91 -1

//Average was 91.5

//Minimum was 86