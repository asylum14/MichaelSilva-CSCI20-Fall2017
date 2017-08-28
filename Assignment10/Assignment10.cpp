/*
Created by:Michael Silva
Created on: 8/24/2017
Description: This program determines the Acceleration and time needed for a 
jet with a given velocity and distance to lift off the ground.

*/
#include <iostream>
using namespace std;

int main(){
    float velocity;
    float velocityConverted;
    float distance;
    float acceleration;
    float t;  //t = time
    
    cout<< "at what velocity is the Jet currently at (in km/hr)?"<<endl;
    cin>>velocity;
    cout<< "How long is the runway (in meters)?"<<endl;
    velocityConverted= (velocity*1000)/(60*60);        //I'm multiplying by 1000 to convert kilometers into meters.
                                                        //I'm also  divideing by 60*60 to convert hours to minutes. and further minutes to seconds
    
    cin >> distance;
    acceleration=(velocityConverted*velocityConverted)/(2*distance);
    
    t= (2*distance)/velocityConverted;
    
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
    
    
    cout<<"it takes "<<t<<" seconds to take off at a rate of "<<acceleration<<" meters per second^2"<<endl;
    return 0;
}

