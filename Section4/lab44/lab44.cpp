/*
Created by:Michael Silva
Created on: 10/23/2017
Description:  This program gives username examples given the users first and last names.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
     int const USERS=4;
     int const FIRSTNAMELIMIT=15;
     int const LASTNAMELIMIT =20;
     int count=0;
     bool errorHandleFlag=true;
     
    char firstName[USERS][FIRSTNAMELIMIT]={"Michael","April","AnaElizabeth","James"};
    char lastName[USERS][LASTNAMELIMIT]={"Silva","Browne","Hazeltine-Smith","James"};
    
    
    for(int i =0; i<USERS;i++){
        cout<<"Try these usernames:"<<endl;    
        if(strlen(firstName[i])<10){
            
            
                //check to see if the users first name is the same as the last name
            if(strcmp(firstName[i],lastName[i])==0){
                    cout<<"your first name and last name are the same. are you sure you That this is correct? Type 0 for no. 1 for yes "<<endl;
                    cin>>errorHandleFlag;
            }
                //if the user decides to allow the first and last names to be the same or the name is less than 10 charactrs
            if(errorHandleFlag){
                for(int k=0; k<2;k++){
                    cout<<firstName[i][k];
                }
                        
                for(int l=0; l<LASTNAMELIMIT;l++){
                    cout<<lastName[i][l];
                }
                        
                cout<<endl;
                cout<<firstName[i][0];
                
                for(int l=0; l<LASTNAMELIMIT;l++){
                    cout<<lastName[i][l];
                }
                        
                cout<<endl;
                
                for(int k=0; k<FIRSTNAMELIMIT; k++){
                    cout<<firstName[i][k];
                }
                        
                for(int l=0; l<LASTNAMELIMIT;l++){
                    cout<<lastName[i][l];
                }
                
                cout<<endl<<endl;
            }
                        
        }else{
            cout<<"Name is too large"<<endl<<endl;
         }
    }
}


/*
Try these usernames:
MiSilva
MSilva
MichaelSilva

Try these usernames:
ApBrowne
ABrowne
AprilBrowne

Try these usernames:
Name is too large

Try these usernames:
your first name and last name are the same. are you sure you That this is correct? Type 0 for no. 1 for yes 
1
JaJames
JJames
JamesJames



Try these usernames:
MiSilva
MSilva
MichaelSilva

Try these usernames:
ApBrowne
ABrowne
AprilBrowne

Try these usernames:
Name is too large

Try these usernames:
your first name and last name are the same. are you sure you That this is correct? Type 0 for no. 1 for yes 
0


*/