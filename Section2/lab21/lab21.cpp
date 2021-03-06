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
    double velocity_power_constant=0;
    //I made this variable to simplify the code a bit so there isn't a buch of functions in one equation.
    double difference=0;
     cout<<"What is the tempeture?"<<endl;
    cin>>tempeture;
    cout<<"How fast is the wind?"<<endl;
    cin>>velocity;
    velocity_power_constant=pow(velocity,0.16);
    
    old_wind_chill=0.081*(3.71*sqrt(velocity)+(5.81-0.25*velocity))*(tempeture-91.4)+91.4;
    new_wind_chill=35.74+0.6215*tempeture-35.75*velocity_power_constant+0.4275*tempeture*velocity_power_constant;
    difference=new_wind_chill-old_wind_chill;
    
    cout<<"Wind Speed       "<<"Tempeture                "<<"Old Wind Chill Formula       "<<"New Wind Chill Formula"<<"       difference"<<endl;
    cout<<velocity<<"                "<<tempeture<<"                       "<<old_wind_chill<<"                       "<<new_wind_chill<<"                       "<<difference<<endl;
   
    
}
/*input:30,4
output:
What is the tempeture?
30
How fast is the wind?
4
Wind Speed       Tempeture                Old Wind Chill Formula       New Wind Chill Formula       difference
4                30                       30.5753                       25.767                       -4.8083

input:39.25,10
output:
What is the tempeture?
39.25
How fast is the wind?
10
Wind Speed       Tempeture                Old Wind Chill Formula       New Wind Chill Formula       difference
10                39.25                       27.8601                       32.713                       4.85286

input:100,2
output:
What is the tempeture?
100
How fast is the wind?
2
Wind Speed       Tempeture                Old Wind Chill Formula       New Wind Chill Formula       difference
2                100                       98.7538                       105.711                       6.95719


*/