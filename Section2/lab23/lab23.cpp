/*
Created by: Michael Silva 
Created on: 8/28/2017
Description:this program is designed to create a function that generates a "random" number between two numbers of the user's choice
and a function that swaps two numbers
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
    return ((rand()%(numMax-numMin))+numMin+1);
}

int main(){
    int userMin=0;
    int userMax=0;
    cout<<"please enter the minimum value"<<endl;
    cin>>userMin;
    cout<<"please enter the Maximum value"<<endl;
    cin>>userMax;
    cout<<"Number between 1 and 10 "<<RandomNumberGet(1,10)<<endl;
    cout<<"Number between 5 and 82 "<<RandomNumberGet(5,82)<<endl;
    cout<<"Number between 22 and 73 "<<RandomNumberGet(22,73)<<endl;
    cout<<"Number between two user inputs "<<RandomNumberGet(userMax,userMin)<<endl;

}
/*
*******FIXME NUMBERS LARGER THAN THEY SHOULD BE
please enter the minimum value
14
please enter the Maximum value
16
Number between 1 and 10 16
Number between 5 and 82 103
Number between 22 and 73 97
Number between two user inputs 15

*/