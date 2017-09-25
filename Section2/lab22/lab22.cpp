/*/*
Created by: Michael Silva 
Created on: 8/28/2017
Description:this program is designed to create a function that generates a "random" number between 1 and 100
*/
#include<iostream>
#include<cmath>

using namespace std;
void RandomNumberGet(){
     srand (time(NULL));//start the random generator
   int rand_num=(rand()%100)+1;
    cout<<rand_num<<endl;
}
int main(){
    RandomNumberGet();
}
/*
run 1:96
run 2:7
run 3:90
*/