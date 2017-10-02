/*
Created by: Michael Silva 
Created on: 8/28/2017
Description:
this program does three things.
1: a random number generator that swaps to numbers 
and gives a number between the two numbers. 
2: a function that converts pounds to kilograms. 
3: a function that converts kilograms to pounds.
*/


#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
void SwapNumbers(int& number1, int& number2){  
    int tempNum2;
    int tempNum1;
    tempNum2=number1;
    tempNum1=number2;
    number1=tempNum1;
    number2=tempNum2;
    return;
}
int RandomNumberGet(int numMin,int numMax){
    SwapNumbers(numMax,numMin);
    srand(time(NULL));
    return ((rand()%(numMin-numMax))+numMax);
}
double PoundsToKilograms(double pounds){
    double kilograms= pounds*(1/2.2);
    return kilograms;
}
double KilogramsToPounds(double kilograms){
    double pounds= kilograms*2.2;
    return pounds;
    
}

int main(){
    double random_number_min=120;
    double random_number_max=300;
    double  random_value=RandomNumberGet(random_number_min,random_number_max);
    double kilograms_new=PoundsToKilograms(random_value);
    double pounds_final = KilogramsToPounds(kilograms_new);
    cout<< "the numbers given to the random number generator were Min: "<<random_number_min<<endl;
    cout<< "and max: "<<random_number_max<<" which returned "<< random_value<<endl;
    cout<<"the random value was then put into the pound to kilogram, function  as pounds it returned "<< kilograms_new<<endl;
    cout<<"Then that number was passed throught the kilogram to pound function as kilograms, it returned "<<pounds_final<<endl;
    
}

/*
the numbers given to the random number generator were Min: 120
and max: 300 which returned 150
the random value was then put into the pound to kilogram, function  as pounds it returned 68.1818
Then that number was passed throught the kilogram to pound function as kilograms, it returned 150
*/