/*
Created by: Michael Silva 
Created on: 8/28/2017
Description: This is a program that calculates wind chill given the  Velocity and tempeture
*/

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
    double velocity=0;
    double tempeture=0;
    double old_wind_chill=0;
    double new_wind_chill=0;
    double velocity_power_constant=pow(velocity,0.16);
    cout<<"How fast is the wind?"<<endl;
    cin>>velocity;
    cout<<"What is the tempeture?"<<endl;
    cin>>tempeture;
    
    old_wind_chill=0.081*(3.71*sqrt(velocity)+5.81-0.25*velocity)*(tempeture-91.4)+91.4;
    new_wind_chill=35.74+0.6215*tempeture-35.75*velocity_power_constant+0.4275*tempeture*velocity_power_constant;
    
    cout<<"Wind Speed       "<<"Tempeture                "<<"Old Wind Chill Formula       "<<"New Wind Chill Formula"<<endl;
    cout<<velocity<<"               "<<tempeture<<"                       "<<old_wind_chill<<"                       "<<new_wind_chill<<endl;
    
}