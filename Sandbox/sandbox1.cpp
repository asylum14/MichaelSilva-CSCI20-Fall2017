#include <iostream>
using namespace std;

int main() {
   int userNum  = 5;
   int i = 0;
   int j = 0;

   while(i<userNum){
         for(j=0; j<2*i; j++){
            cout<<" ";            
            j++;      
          
          }
         cout<<i<<endl;
         i++;
      }

   
}