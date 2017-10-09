/*
Created by: Michael Silva 
Created on: 8/28/2017
Description:

*/
#include<iostream>
#include<string>
using namespace std;
class Runners {
    private:
    int time_minutes_;  
    int time_seconds_;  
    int distance_;//private variables
    int distance_feet_;
    
    public:
    void SetTime(double minutes,double seconds);  //sets time, requires an doubleeger 
    void SetDistance(double distanceMeter); //sets distance, requires distance in meters
    double GetTimeMinutes() const;        //gets time in minutes
    double GetTimeSeconds() const;          //gets Seconds remaining in the minute 
    double GetTimeTotal() const;            // gets total time in seconds
    double GetDistanceMeter() const;        // gets total distance in meters 
    double GetDistanceFeet() const;         // gets total distance in feet 
    double feet_per_second(double distanceFeet,double seconds); //calculates feet per second, using distance in feet and time in seconds
    double meter_per_second(double distanceMeter, double seconds);//calculates meter per second, using distance in meter and time in seconds
    double quarter_mile_splits(double distanceFeet, double seconds); //calculates the time for each runner's quater mile time assuming a constant speed
    double winner_time_difference(double winnerTime,double runnerTime);   //calculates the difference between the winner's time and the runner's time

    void Print();         //prints all wanted variables
};                                                  
                                                                
void Runners::SetTime(double minutes,double seconds){
    time_minutes_= minutes;
    time_seconds_= seconds;
}

void Runners::SetDistance(double distanceMeter){
    distance_=distanceMeter;
    distance_feet_=distanceMeter*3.28;
}
double Runners::GetDistanceMeter() const {
    return distance_;
}
double Runners::GetDistanceFeet() const {
    return distance_feet_;
}


double Runners::GetTimeMinutes() const {
    return time_minutes_;
}

double Runners::GetTimeSeconds() const {
    return time_seconds_;
}
double Runners::GetTimeTotal() const {
    return (time_minutes_*60)+time_seconds_;
}

double Runners::feet_per_second(double distanceFeet,double seconds){
    double feetPerSecond=  distanceFeet/seconds;
    return feetPerSecond;
    
}

double Runners::meter_per_second(double distanceMeter,double seconds){
    double meterPerSecond = distanceMeter/seconds;
    return meterPerSecond;
}

double Runners::winner_time_difference(double winnerTime,double runnerTime){
    double diffTime=runnerTime-winnerTime;
    return diffTime;
}

double Runners::quarter_mile_splits(double distanceFeet,double seconds){
    double quarterMileSplit=seconds/((distanceFeet/(5280/4)));//5280 amount of feet in a mile, 4 represents 1/4 of a mile  
    return quarterMileSplit;
}


void Runners::Print(){
    cout<<"Runner Times"<<endl;    //runners times
    cout<<time_minutes_<<":"<<time_seconds_<<endl;
    
    cout<<"Runner Meters per Second"<<endl;    // meters per second
    cout<<distance_/((time_minutes_)*60)+(time_seconds_)<<endl;
    
    cout<<"Runner Feet per Second"<<endl;          //Feet per Second
    cout<<distance_feet_/((time_minutes_)*60)+(time_seconds_)<<endl;
    
    cout<< "Difference from the winning Runner (In Seconds)"<<endl;     //Difference from winner
    cout<<((((time_minutes_*60)+time_seconds_)-((3*60)+47))/60)<<":"<<(((time_minutes_*60)+time_seconds_)-((3*60)+47))%60<<endl;
    
    cout<<"Quarter Mile Time (In Seconds)"<<endl;       //quarter mile time
    cout<<(((time_minutes_*60)+time_seconds_)/(60*distance_feet_/(5280/4)))<<":"<<(((time_minutes_*60)+time_seconds_)/(distance_feet_/(5280/4))%60)<<endl<<endl;
   
}
int main(){
    int distance =5000; //distance in meters 
    
    Runners runnerA;
    Runners runnerB;
    Runners runnerC;
    Runners runnerD;
    Runners runnerE;
    Runners runnerF;
    Runners runnerG;
    Runners runnerH;
    Runners runnerI;
    Runners runnerJ;
    
    runnerA.SetDistance(distance);
    runnerB.SetDistance(distance);
    runnerC.SetDistance(distance);
    runnerD.SetDistance(distance);
    runnerE.SetDistance(distance);
    runnerF.SetDistance(distance);
    runnerG.SetDistance(distance);
    runnerH.SetDistance(distance);
    runnerI.SetDistance(distance);
    runnerJ.SetDistance(distance);
    
    runnerA.SetTime(8,58);
    runnerB.SetTime(27,15);
    runnerC.SetTime(57,22);
    runnerD.SetTime(3,47);
    runnerE.SetTime(11,3);
    runnerF.SetTime(36,30);
    runnerG.SetTime(40,8);
    runnerH.SetTime(7,45);
    runnerI.SetTime(21,36);
    runnerJ.SetTime(60,22);
    
    cout<<"Runner A"<<endl;
    runnerA.Print();
    cout<<"Runner B"<<endl;
    runnerB.Print();
    cout<<"Runner C"<<endl;
    runnerC.Print();
     cout<<"Runner D"<<endl;
    runnerD.Print();
     cout<<"Runner E"<<endl;
    runnerE.Print();
     cout<<"Runner F"<<endl;
    runnerF.Print();
     cout<<"Runner G"<<endl;
    runnerG.Print();
     cout<<"Runner H"<<endl;
    runnerH.Print();
     cout<<"Runner I"<<endl;
    runnerI.Print(); 
    cout<<"Runner J"<<endl;
    runnerJ.Print();
  
}


/*
Psudo-code
Input: runners race time in minutes and seconds
Output: runners feet per second, meters per second, runners splits time for every ¼ mile.  For a 5k run.
Requires: 
Get and set functions
Print function
Minimal variable per class
Main function that demonstrates all of your classes’ abilities and should have ALL of the input/output.
Algorithm: create class for a runner. Defining his time, his feet per second his meters per second, then determine the runners ¼ mile times and compare it to the winners time.

Class Runners {
Private 
time_minutes_;
time_Seconds_;
public 
feet_per_second(){};
meter_per_second(){};
quarter_mile_splits(){};
winner_time_difference(){};
}
*/

/*
output:
Runner A
Runner Times
8:58
Runner Meters per Second
68
Runner Feet per Second
92
Difference from the winning Runner (In Seconds)
5:11
Quarter Mile Time (In Seconds)
0:44

Runner B
Runner Times
27:15
Runner Meters per Second
18
Runner Feet per Second
25
Difference from the winning Runner (In Seconds)
23:28
Quarter Mile Time (In Seconds)
2:16

Runner C
Runner Times
57:22
Runner Meters per Second
23
Runner Feet per Second
26
Difference from the winning Runner (In Seconds)
53:35
Quarter Mile Time (In Seconds)
4:46

Runner D
Runner Times
3:47
Runner Meters per Second
74
Runner Feet per Second
138
Difference from the winning Runner (In Seconds)
0:0
Quarter Mile Time (In Seconds)
0:18

Runner E
Runner Times
11:3
Runner Meters per Second
10
Runner Feet per Second
27
Difference from the winning Runner (In Seconds)
7:16
Quarter Mile Time (In Seconds)
0:55

Runner F
Runner Times
36:30
Runner Meters per Second
32
Runner Feet per Second
37
Difference from the winning Runner (In Seconds)
32:43
Quarter Mile Time (In Seconds)
2:2

Runner G
Runner Times
40:8
Runner Meters per Second
10
Runner Feet per Second
14
Difference from the winning Runner (In Seconds)
36:21
Quarter Mile Time (In Seconds)
3:20

Runner H
Runner Times
7:45
Runner Meters per Second
56
Runner Feet per Second
84
Difference from the winning Runner (In Seconds)
3:58
Quarter Mile Time (In Seconds)
0:38

Runner I
Runner Times
21:36
Runner Meters per Second
39
Runner Feet per Second
49
Difference from the winning Runner (In Seconds)
17:49
Quarter Mile Time (In Seconds)
1:48

Runner J
Runner Times
60:22
Runner Meters per Second
23
26
Difference from the winning Runner (In Seconds)
56:35
Quarter Mile Time (In Seconds)
4:1
*/