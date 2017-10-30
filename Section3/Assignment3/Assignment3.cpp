/*
Created by:Michael Silva
Created on: 10/23/2017
Description:This program is a game of pig played between the player and the computer.
*/

#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace std :: this_thread;//this_thread allows me to use the sleep_for function
using namespace std :: chrono; //chrono allows me to use the function seconds


class Player{
    private:
    int totalScore_;
    
    public:
    //constructor
    Player(){
        totalScore_=0;
    }
    //rolls a number between 1-6, returns an integer
    int Roll(){
        srand(time(NULL));
        int roll=0;
        roll=(random()%6)+1;
     return roll;   
    }
    //returns the players current score as an integer
    int GetScore(){
        return totalScore_;
    }
    //adds top the players current score, requires an integer argument that represents the score added, returns nothing. 
    void AddScore(int turnScore){
        totalScore_=totalScore_+turnScore;
    }
    
};




int main(){
    Player Computer; //Computer player
    Player User; //User player
    //While game is being played; while either players score is less then 100, continue code
    while(User.GetScore()<100 && Computer.GetScore()<100){
            int playerDecision=0; //used to determine if the player is going to roll or hold 
            int turnScore=0;
            bool playerTurn =true; //makes sure to start with the player first
            bool computerTurn=false;
            int roll=0;
            cout<<"Your turn your total score is "<<User.GetScore()<<endl;
            
            //while it is the players turn; i.e. user doesn't roll a 1 and decides to keep going
           while(roll!=1 && (playerTurn==true)){
            cout<<"Current turn Score is "<<turnScore<<" "<<endl;;
            cout<<"Would you like to hold or to roll? press 1 to roll and 0 to hold"<<endl;
            //playerDecision can only be 0 or 1
            cin>>playerDecision;
            if(playerDecision==1){
                roll=User.Roll();
                turnScore=turnScore+roll;
                cout<<"Player's Roll "<<roll<<endl;
                
                //if the player rolls a 1, end turn
                if(roll==1){
                    turnScore=0;
                    playerTurn=false;
                    computerTurn=true;
                    
                }
                
            }else if(playerDecision==0){
             User.AddScore(turnScore);
             playerTurn=false;
             computerTurn=true;
            }
            // if the user enters something that is not 0 or 1 return an error
            else{
                cout<<"ERROR: Invalid input please enter only a 1 or a 0"<<endl;
            }
            
           }
        computerTurn=true;
        turnScore=0;
        sleep_for(seconds(1)); //prevents the computer from rolling the same number the player just did 
        
        
        //Computer's turn
        cout<<"Computer's turn"<<endl;
        //computer will wait until it's score is over 15 to hold
        while(turnScore<15 && computerTurn==true){
            sleep_for(seconds(1)); //prevents the computer from rolling the same number multiple times in a row
            
            int computerRoll=0;
            computerRoll=Computer.Roll();
            cout<<"Computer's Roll "<<computerRoll<<endl;
            turnScore=turnScore+computerRoll;
            if(computerRoll==1){
                turnScore=0;
                computerTurn=false;
            }
            //the computer will only keep rolling until his score is higher than 15or if it rolls a 1
            if(turnScore>=15){
                Computer.AddScore(turnScore);
                computerTurn=false;
                }
        }
        cout<<"computer score: "<<Computer.GetScore()<<endl;
        playerTurn=true;
       
    }
    
    //determines who the winner is 
    if (User.GetScore()>100 && Computer.GetScore()<User.GetScore()){
        cout<<"You Win"<<endl;
        cout<<"Player Score: "<<User.GetScore()<<"      "<<"Computer Score: " << Computer.GetScore()<<endl;
    } else if(Computer.GetScore()>100 && Computer.GetScore()>User.GetScore()){
        cout<< "You Lose"<<endl; 
        cout<<"Player Score: "<<User.GetScore()<<"      "<<"Computer Score: " << Computer.GetScore()<<endl;
    } else if(Computer.GetScore() == User.GetScore()){
        cout<<"Draw"<<endl;
        cout<<"Player Score: "<<User.GetScore()<<"      "<<"Computer Score: " << Computer.GetScore()<<endl;
    }
    
    
}




/*WINNING GAME
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 10 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 15 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 21 
Would you like to hold or to roll? press 1 to roll and 0 to hold
0
Computer's turn
Computer's Roll 4
Computer's Roll 5
Computer's Roll 3
Computer's Roll 6
computer score: 18
Your turn your total score is 21
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 2 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 7 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 6
Computer's Roll 4
Computer's Roll 3
Computer's Roll 3
computer score: 34
Your turn your total score is 21
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 3 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 9 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 11 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 14 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 16 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 18 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 23 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 25 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 31 
Would you like to hold or to roll? press 1 to roll and 0 to hold
0
Computer's turn
Computer's Roll 6
Computer's Roll 4
Computer's Roll 4
Computer's Roll 5
computer score: 53
Your turn your total score is 52
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 3 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 9 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 13 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 19 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 25 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 31 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 35 
Would you like to hold or to roll? press 1 to roll and 0 to hold
0
Computer's turn
Computer's Roll 3
Computer's Roll 1
computer score: 53
Your turn your total score is 87
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 4 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 10 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 6
Computer's Roll 1
computer score: 53
Your turn your total score is 87
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 3 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 8 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 14 
Would you like to hold or to roll? press 1 to roll and 0 to hold
0
Computer's turn
Computer's Roll 4
Computer's Roll 4
Computer's Roll 5
Computer's Roll 1
computer score: 53
You Win
Player Score: 101      Computer Score: 53
*/

/*LOSING GAME
Running /home/ubuntu/workspace/Section3/Assignment3/Assignment3.cpp
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 5 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 7 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 9 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 12 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 15 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 18 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 21 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 24 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 30 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 36 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 40 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 44 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 48 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
1
Computer's turn
Computer's Roll 1
computer score: 0
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 1
Computer's turn
Computer's Roll 5
1Computer's Roll 1
computer score: 0
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
ERROR: Invalid Input
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold

1
Player's Roll 6
Current turn Score is 12 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 16 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 20 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 23 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
1Computer's turn
Computer's Roll 2
Computer's Roll 3
Computer's Roll 5
Computer's Roll 6
computer score: 16
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
ERROR: Invalid Input
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 3 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 5 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 8 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 10 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 12 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 15 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 4
Computer's Roll 4
Computer's Roll 5
Computer's Roll 2
computer score: 31
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
1
Computer's turn
Computer's Roll 4
Computer's Roll 4
Computer's Roll 3
Computer's Roll 6
computer score: 48
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 6
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 8 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
1
Computer's turn
Computer's Roll 6
Computer's Roll 3
Computer's Roll 2
Computer's Roll 3
Computer's Roll 3
computer score: 65
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 3
Current turn Score is 3 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 7 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 9 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 11 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 14 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 1
computer score: 65
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
1
Computer's turn
1Computer's Roll 1
computer score: 65
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 1
Computer's turn
Computer's Roll 3
Computer's Roll 4
Computer's Roll 4
Computer's Roll 3
Computer's Roll 2
computer score: 81
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
ERROR: Invalid Input
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 12 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 18 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 4
Computer's Roll 1
computer score: 81
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 4 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 7 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 11 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 15 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 18 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 24 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 30 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 34 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 37 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 40 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 42 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 4
Computer's Roll 6
Computer's Roll 4
Computer's Roll 3
computer score: 98
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 3 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 3
Computer's Roll 6
Computer's Roll 6
computer score: 113
You Lose
Player Score: 0      Computer Score: 113
*/

/*DRAW GAME *Not an actual draw*
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
1
Computer's turn
Computer's Roll 5
Computer's Roll 4
Computer's Roll 4
Computer's Roll 6
computer score: 19
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 6
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 5
Computer's Roll 1
computer score: 19
Your turn your total score is 0
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 2 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 8 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 10 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 13 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 16 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 19 
Would you like to hold or to roll? press 1 to roll and 0 to hold
0
Computer's turn
Computer's Roll 4
Computer's Roll 5
Computer's Roll 3
Computer's Roll 1
computer score: 19
Your turn your total score is 19
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 11 
Would you like to hold or to roll? press 1 to roll and 0 to hold
0
Computer's turn
Computer's Roll 2
Computer's Roll 2
Computer's Roll 2
Computer's Roll 5
Computer's Roll 1
computer score: 19
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
0
Computer's turn
Computer's Roll 3
Computer's Roll 6
Computer's Roll 2
Computer's Roll 5
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 1
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 3
Computer's Roll 5
Computer's Roll 1
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 1
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 12 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 18 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 20 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 4
Computer's Roll 1
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 3
Computer's Roll 1
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 2 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 4 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 2
Computer's Roll 1
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
1
Computer's Roll 4
1
Computer's Roll 1
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 1
1Computer's turn

1
Computer's Roll 6
Computer's Roll 1
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 1
Computer's turn
Computer's Roll 1
computer score: 35
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 1
Computer's turn
Computer's Roll 2
1
Computer's Roll 5
Computer's Roll 6
Computer's Roll 4
computer score: 52
Your turn your total score is 30
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 4
Current turn Score is 4 
Would you like to hold or to roll? press 1 to roll and 0 to hold
Player's Roll 4
Current turn Score is 8 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 13 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 15 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 19 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 25 
Would you like to hold or to roll? press 1 to roll and 0 to hold
0
Computer's turn
Computer's Roll 4
Computer's Roll 5
Computer's Roll 3
Computer's Roll 5
computer score: 69
Your turn your total score is 55
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 5 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 10 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 12 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 14 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 2
Current turn Score is 16 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 20 
Would you like to hold or to roll? press 1 to roll and 0 to hold
0
Computer's turn
Computer's Roll 1
computer score: 69
Your turn your total score is 75
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 6
Current turn Score is 6 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 11 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 4
Current turn Score is 15 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 6
Computer's Roll 6
Computer's Roll 6
computer score: 87
Your turn your total score is 75
Current turn Score is 0 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 5
Current turn Score is 5 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 3
Current turn Score is 8 
Would you like to hold or to roll? press 1 to roll and 0 to hold
1
Player's Roll 1
Computer's turn
Computer's Roll 2
Computer's Roll 3
Computer's Roll 5
Computer's Roll 5
computer score: 102
You Lose
Player Score: 75      Computer Score: 102

*/
