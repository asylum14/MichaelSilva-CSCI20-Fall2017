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
    cout<<"The numbers passed were "<<number1<<" and "<<number2<<" in that order"<<endl;
    tempNum2=number1;
    tempNum1=number2;
    number1=tempNum1;
    number2=tempNum2;
    cout<<"The numbers swapped are now "<<number1<<" and "<<number2<<" in that order"<<endl;
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
    cout<<RandomNumberGet(userMax,userMin)<<endl;

}