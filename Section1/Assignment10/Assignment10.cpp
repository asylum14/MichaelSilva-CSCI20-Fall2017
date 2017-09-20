/*
Created by:Michael Silva
Created on: 8/24/2017
Description: This program determines the Acceleration and time needed for a 
jet with a given velocity and distance to lift off the ground.

*/
#include <iostream>
using namespace std;
    struct Jet{
        double velocity;
        double velocity_converted;
        double distance;
        double TIME;
        double acceleration;
        
    };
int main(){
    Jet jetA;
    Jet jetB;
    Jet jetC;
    Jet jetD;
    Jet jetE;
    
    jetA.velocity=278;
    jetA.velocity_converted=(jetA.velocity*1000)/(60*60);
    jetA.distance=92;
    jetA.acceleration=(jetA.velocity_converted*jetA.velocity_converted)/(2*jetA.distance);
    jetA.TIME=(2*jetA.distance)/jetA.velocity_converted;
    
    jetB.velocity=278;
    jetB.velocity_converted=(jetB.velocity*1000)/(60*60);
    jetB.distance=700;
    jetB.acceleration=(jetB.velocity_converted*jetB.velocity_converted)/(2*jetB.distance);
    jetB.TIME=(2*jetB.distance)/jetB.velocity_converted;
    
    jetC.velocity=200;
    jetC.velocity_converted=(jetC.velocity*1000)/(60*60);
    jetC.distance=60;
    jetC.acceleration=(jetC.velocity_converted*jetC.velocity_converted)/(2*jetC.distance);
    jetC.TIME=(2*jetC.distance)/jetC.velocity_converted;
    
    jetD.velocity=100;
    jetD.velocity_converted=(jetD.velocity*1000)/(60*60);
    jetD.distance=700;
    jetD.acceleration=(jetD.velocity_converted*jetD.velocity_converted)/(2*jetD.distance);
    jetD.TIME=(2*jetD.distance)/jetD.velocity_converted;
    
    
    
    
    
  
    cout<< "at what velocity is the Jet currently at (in km/hr)?"<<endl;
    cin>>jetE.velocity;
    cout<< "How long is the runway (in meters)?"<<endl;
    jetE.velocity_converted= (jetE.velocity*10/36);//1000)/ (60*60);          //I'm multiplying by 1000 to convert kilometers into meters.
                                                                    //I'm also  divideing by 60*60 to convert hours to minutes. and further minutes to seconds
    
    cin >> jetE.distance;
    jetE.acceleration=(jetE.velocity_converted*jetE.velocity_converted)/(2*jetE.distance);
    
    jetE.TIME= (2*jetE.distance)/jetE.velocity_converted;
    
    /*
        The original equations  I was working with were v=a*t and s=(1/2)*a*t^2.
        Where v=velocity a= acceleration t=time s=distance.
        However if you simply replace a*t with v in  s=(1/2)*a*t^2 you get, 
        s=(1/2)*v*t. this way we can solve for t without finding a. This way 
        we only have to depend on variables supplied by the user.
        if we times everything by 2 and divide by v the equation looks like 2s/v=t
        now we can solve for t. Also if we put this general equation in for v=at
        it will now look like v=(a*2s)/v. then we times by v and divide by 2s to solve for a.
        which looks like a=(v^2)/(2s).
    */
    
    cout<<"if the Velocity is "<<jetA.velocity<< " km/hr and the distance is "<<jetA.distance<<" meters"<<endl;
    cout<<"Jet A would take "<<jetA.TIME<<" seconds to take off at a rate of "<<jetA.acceleration<<" meters per second^2"<<endl<<endl;
    
    cout<<"if the Velocity is "<<jetB.velocity<< " km/hr and the distance is "<<jetB.distance<<" meters"<<endl;
    cout<<"The Jet B would take "<<jetB.TIME<<" seconds to take off at a rate of "<<jetB.acceleration<<" meters per second^2"<<endl<<endl;
    
    cout<<"if the Velocity is "<<jetC.velocity<< " km/hr and the distance is "<<jetC.distance<<" meters"<<endl;
    cout<<"The Jet C would take "<<jetC.TIME<<" seconds to take off at a rate of "<<jetC.acceleration<<" meters per second^2"<<endl<<endl;


    cout<<"if the Velocity is "<<jetD.velocity<< " km/hr and the distance is "<<jetD.distance<<" meters"<<endl;
    cout<<"The Jet D would take "<<jetD.TIME<<" seconds to take off at a rate of "<<jetD.acceleration<<" meters per second^2"<<endl<<endl;


    cout<<"if the Velocity is "<<jetE.velocity<< " km/hr and the distance is "<<jetE.distance<<" meters"<<endl;
    cout<<"The Jet E would take "<<jetE.TIME<<" seconds to take off at a rate of "<<jetE.acceleration<<" meters per second^2"<<endl<<endl;
    
}

/*
input:5,5

at what velocity is the Jet currently at (in km/hr)?
5
How long is the runway (in meters)?
5
if the Velocity is 278 km/hr and the distance is 92 meters
Jet A would take 2.38273 seconds to take off at a rate of 32.4091 meters per second^2

if the Velocity is 278 km/hr and the distance is 700 meters
The Jet B would take 18.1295 seconds to take off at a rate of 4.25948 meters per second^2

if the Velocity is 200 km/hr and the distance is 60 meters
The Jet C would take 2.16 seconds to take off at a rate of 25.7202 meters per second^2

if the Velocity is 100 km/hr and the distance is 700 meters
The Jet D would take 50.4 seconds to take off at a rate of 0.551146 meters per second^2

if the Velocity is 5 km/hr and the distance is 5 meters
The Jet E would take 7.2 seconds to take off at a rate of 0.192901 meters per second^2
*/