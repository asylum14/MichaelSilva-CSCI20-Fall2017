#include <iostream>
using namespace std;

class Salary //The amount of money made. can be used to determine salary in various periods of time.
{
    private: 
        double annual_; //data field
    public:
        void SetAnnualSalary(double salary) //mutator function
        {
            annual_ = salary;
        }
        double GetAnnualSalary() //acessor function
        {
            return annual_;
        }
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};

//Comment the class per the class style guide
//Identify the following parts of the class
//      data field
//      mutator function
//      accessor function
//Create a main function that creates an object and runs all of the functions in order