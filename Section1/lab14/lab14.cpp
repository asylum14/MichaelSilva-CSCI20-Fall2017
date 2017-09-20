/*
Created by: Michael Silva 
Created on: 8/28/2017
Description: Coinstar emulation  lab. This lab is designed to show us how we 
can use arithmetic operaters to affect our program.

*/

#include <iostream>
using namespace std;

int main(){
    int value =0;
    int quarter_value=25;
    int dime_value =10;
    int nickel_value =5;
    int penny_value =1;
    cout<<"How much money are you inputing in cents? "<<endl;
    cin>>value;
    value = value- value*0.109;
    cout<<"The amount received after the 10.9\% fee is "<<value<<" cents"<<endl;
int quarters = value/quarter_value;
    value=value-(quarter_value*quarters);
    
int dimes = value/dime_value;
    value =value-(dime_value*dimes);
int nickels= value/nickel_value;
    value = value- (nickel_value*nickels);
int pennies = value%nickel_value;
    cout<<"Quarters: "<<quarters<<endl;
    cout<<"Dimes:    "<<dimes<<endl;
    cout<<"Nickel:   "<<nickels<<endl;
    cout<<"Pennies:  "<<pennies<<endl;
}
/*
1. output:How much money are you inputing? 
2. input:763
3. output:
The amount received after the 10.9% fee is 880000000 cents
    Quarters: 30
    Dimes:    1
    Nickel:   0
    Pennies:  3
*/