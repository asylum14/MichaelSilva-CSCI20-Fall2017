/*
Created by: Michael Silva 
Created on: 8/28/2017
Description: Population Clock lab

*/

#include <iostream>
using namespace std;

int main(){
    int  t=0;
    
    cout<<"How Much time has passed in years?"<<endl;
    cin>>t; //t=time
    int  year= t+2017;
    t=t*365*24*60; //convert years to minutes, because converting to seconds make the number too masive for the computer to handle
    int  population=325762730;
    int  population_growth=(t/12)*60; //net growth is equal to aproximatly 1 person added to the population every 12 seconds, Multiplied by 60 to compensate for not converting t to seconds
    
    
    population = population + population_growth;
    
    cout<<"the current population of the United States is 325762730 people"<<endl;
    cout<<"The predicted population of the United States in " << year<<" is "<<population<<endl;
    cout<<"The population growth is "<<population_growth<<endl;
}