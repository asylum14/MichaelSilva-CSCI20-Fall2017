
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
   string line;
   ifstream fin;    //?  
   ofstream fout;   //?
   
   fin.open("read.txt");//*   chooses the file that the code will take the data from
   fout.open("output.txt");//*      chooses the file to reate or edit with the changes from the code

   while(!fin.eof())//?
   {
      getline(fin, line);       
      fout<<line<<endl;         //this probably writes to the output file
   }

   fin.close();//*
   fout.close();//*    this probably closes the input and output files.

   return 0;
}


//Mark with a //* 3-5 items that are important
//Mark with a //? 3-5 items that are unclear, incorrect, or you have questions about.
//identify which parts you think are related to file input/output.  and what they do.  Guess.