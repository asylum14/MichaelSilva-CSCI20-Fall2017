#include <iostream>
using namespace std;

int main(){

string mystring = "my test string"; //sets mystring to "Mytest string"
string mystring2 = mystring;       //sets mystring2 to mystring
 
string myString3 = "my test string"; //sets mystring3 to "My test string" and then checks if mystring3 is the same as "My test string"
if (myString3 == "my test string")
{
   cout<<"The same"<<endl;
}

string myString4 = "my test string";   //counts the amount of spaces in the string
int i = 0, spaceCount = 0;
while (i < 20)
{
   if (myString4[i] == ' ')
   {
        spaceCount++;
   }
   i++;
}

string myString5 = "my test string"; //if the character "i" isn't a null character cout that character. this doesn't work.
i = 0;
while (myString5[i] != '\0')
{
   cout<<myString5[i];
   i++;
}

string myString6 = "my test string "; //adds an exclamation point to index 14 . This doesn't work 
myString6[14] = '!';
cout<<myString6<<endl;
}

//run the code
//what should each of these do?  Do they do them?



//the only ones that did not do as they were suppose to were the ones that treated the string as an array