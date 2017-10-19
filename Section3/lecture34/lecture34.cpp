#include <iostream>
using namespace std;

int main()
{
    int number = 0, product = 0;
    while (number >=0)//while a number is greater then 0 run the code, runs 5 times
    {
        for (int i = 0; i<3; i++)//runs 3 times
        { 
            product = number * i;
        }
        cout<<"Please enter a positive integer: ";
        cin >> number; //user input for number
    }
    cout<<"The product is: "<<product<<endl;
}//i == 3 at the end of the program

//Comment the code as pseudocode
//Determine how many times each loop executes if the numbers input are 5, 4, 3, 2, 1,-1
//What is the value of i at the end of the program?