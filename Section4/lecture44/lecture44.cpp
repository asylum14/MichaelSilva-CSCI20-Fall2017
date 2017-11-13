#include <iostream>
using namespace std;

int main()
{
    
char mystring[20] = "my test string";
//char mystring2[20] = mystring; //a cstring can not be defined by a variable

char myString3[20] = "my test string";
if (myString3 == "my test string")
{
   cout<<"The same"<<endl;
}

 
char myString4[20] = "my test string";
int i = 0; 
int spaceCount = 0;
while (i < 20)
{
   if (myString4[i] == ' ')
   {
        spaceCount++;
        cout<<spaceCount<<endl;
   }
   i++;//added i++
   
}


//char myString5[2] = "my test string"; // ac string can not be longer than the size of the array
i = 0;
/*while (myString5[i] != '\0')
{
   cout<<myString5[i];
   i++;
}*/

char myString6[20] = "my test string";
myString6[14] = '!';
cout<<myString6<<endl;
}

//run the code
//what should each of these do?  Do they do them?