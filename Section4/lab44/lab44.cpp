/*
Created by:Michael Silva
Created on: 10/23/2017
Description:  This program gives ussername examples given the users first and last names.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int const USERS=4;
    bool errorHandleFlag=true;
   
  string userFirstNames[USERS]={"Michael","April","AnaElizabeth","James"};
  string userLastNames[USERS]={"Silva","Browne","Hazeltine-Smith","James"};
    
        cout<<"Try these usernames:"<<endl;
        for(int i =0; i<USERS;i++){
            if(userFirstNames[i]==userLastNames[i]){
                cout<<"your first name and last name are the same. are you sure you That this is correct? Type 0 for no. 1 for yes "<<endl;
                cin>>errorHandleFlag;
            }
            if(userFirstNames[i].length()>10 || userLastNames[i].length()>20){
                cout<<"This Name is too large"<<endl<<endl;
            }
            if(userFirstNames[i].length()<=10 && userLastNames[i].length()<=20){
                if(errorHandleFlag){
                  for(int j =0;j<2;j++){
                       cout<<userFirstNames[i][j];
                    }
                        cout<<userLastNames[i]<<endl;
                        cout<<userFirstNames[i][0]<<userLastNames[i]<<endl;
                        cout<<userFirstNames[i]<<userLastNames[i]<<endl<<endl;
                }
            }
        }
    }
/*
    Try these usernames:
        MiSilva
        MSilva
        MichaelSilva
        
        ApBrowne
        ABrowne
        AprilBrowne
        
        This Name is too large
        
        your first name and last name are the same. are you sure you That this is correct? Type 0 for no. 1 for yes 
        1
        JaJames
        JJames
        JamesJames


        Try these usernames:
        MiSilva
        MSilva
        MichaelSilva

        ApBrowne
        ABrowne
        AprilBrowne
        
        This Name is too large
        
        your first name and last name are the same. are you sure you That this is correct? Type 0 for no. 1 for yes 
        0
*/
