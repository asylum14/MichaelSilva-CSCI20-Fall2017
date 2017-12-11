// A program to demonstrate the use of stringstream
#include <iostream>
#include <sstream>
using namespace std;
 
int main()
{
    string s = "12345";
 
    // object from the class stringstream
    stringstream po(s);
 
    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    po >> x;
 
    // Now the variable x holds the value 12345
    cout << "Value of x : " << 2*x;
 
    return 0;
}