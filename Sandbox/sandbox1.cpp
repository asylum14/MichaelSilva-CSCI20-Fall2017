#include <iostream>
#include <string>
using namespace std;
int ascTOint(int asc){
   int i=0;
   if(asc==48){
      i=0;
   }else if(asc==49){
      i=1;
   }else if(asc==50){
      i=2;
   }else if(asc==51){
      i=3;
   }else if (asc ==52){
      i=4;
   }else if (asc ==53){
      i=5;
   }else if (asc ==54){
      i=6;
   }else if (asc ==55){
      i=7;
   }else if (asc ==56){
      i=8;
   }else if (asc ==57){
   i=9;
   }
   return i;
}

int main() {
 string p="5hello";
 
 cout<<ascTOint(p[0]);
}