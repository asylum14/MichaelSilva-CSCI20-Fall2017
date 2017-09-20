/*/*
Created by: Michael Silva 
Created on: 8/28/2017
Description:this program is designed to create a function that generates a "random" number between 1 and 100
*/
#include<iostream>
#include<cmath>

using namespace std;

int main(){
   double  randomNumberGet{
            // double guess=(rand()%100)+1;
            return (rand()%100)+1;
            }
    cout<<randomNumberGet()<<endl;    
}