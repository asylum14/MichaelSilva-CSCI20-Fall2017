#include <iostream>
using namespace std;

int main()
{
    int number = 1;// number was initially more than 12 therefore the loop doesn't run it should be 1
                    // number is the variable that the condition checks 
    while (number<=10)// Number<=10 is the condition to continue
    {
        cout<<number<<endl;
        number = number + 1; //change in the variable
    }
    
    int userNumber = 0, x = 1;
    cout<<"Enter a number: ";
    cin>>userNumber;//variable that condition checks
    
    while(x <= userNumber)//condition to continue
    {
        if (x%10 == 0)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<x<<" ";
        }
        x++;//change in variable
    }
}

//The first loop doesn't work.  It should print the numbers from 1 to 10 but it doesn't.
//Identify and correct the problem.
//Comment the code as the pseudocode
//Identify the different parts of the loop.