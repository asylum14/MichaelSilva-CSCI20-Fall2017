#include <iostream>     //includes the iostream library
#include <iostream>     //includes the iostream library again
#include <cstring>      //includes the cstring library
using namespace std;    //uses the standard namespace

int main() {             
    int nameLength = 0;         //initializes variable nameLength
    char * name = new char[]; //ERROR: Doesn't set an array length 
                                //declares data to the data where the pointer is pointing
    cout << "Please enter a 10 letter word or less" << endl; //prints Please enter a 10 letter word or less
    cin >> name;                                            //sets name to user input 

    char * head  = name;                                //sets char head to what name points to
    char * tail = name;                                 //sets char tail to what name points to
    nameLength = strlen(*name); //ERROR:pointing to an undefined place in memory, should just be name
                                //sets nameLength to the length of the c string name
    cout << "Your word is " << firststr << endl;        //ERROR:first was never Declared

    if (nameLength<10)          //if nameLength is less than ten run the code, this code is used to get the word in it's entirety
    {
         while (*head != '\0')  //while the data stored in the memory is not a null operator, or while the the string is is still going
         {
                cout << *head; //print the data stored in the memory
                head++;         //add 1 to head
         }
     }
     else //if the nameLength is more than or equal to 10 run this code
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; //prints WARNING WORD TOO BIG TO DISPLAY!!
     }

     cout << endl; //adds a line break

     tail = &name[strlen(name) - 1];  //sets tail to the address in memory of the Lengthof the string name -1

     if (nameLength < 10)           //if nameLength is less than ten run the code, this code is used to get the back end of a word and reverse the order
     {
          while (tail != name)      //while tail is not equal to name
          {
                 cout << *tail;         //prints the data thattail is pointing to
                 tail--;                //subtracts 1 from tail
          }
     }
     cout << endl;                      //adds a line break

     head = name;                       //sets head equal to name 
     tail = &name[strlen(name) - 1];    //sets tail to the address in memory of the Lengthof the string name -1
     head++;                            //add 1 to head
     tail--;                            //subtract 1 from tail

     if (*head == *tail)                //if the data that head is pointing to is equal to the data that tail is pointing to  
     {
         cout << "It is an palindrome!" << endl;    //prints It is an palindrome!
     }
     else
     {
         cout << "It is not an palindrome" << endl; //prints It is not an palindrome
     }

     return 0;                                      //returns zero
}