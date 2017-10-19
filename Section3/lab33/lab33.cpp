/*
Created by: Michael Silva 
Created on: 8/28/2017
Description: This is program generates a number that the user needs to guess
the program should contine and give feedback based on the users input
*/

#include<iostream>
#include<chrono>
#include<thread>
using namespace std;
using namespace std :: this_thread;//this_thread allows me to use the sleep_for function
using namespace std :: chrono; //chrono allows me to use the function seconds

// Countdown is used to add a countdown from any postive number 
// input: an int that represents the amount of times the code will run, or in other words where the countdown would begin.
// an in that determines the number of seconds between number outputs.
// output: function doesn't return anything. However, it couts all the numbers in the countdown.
void Countdown(int amountIntervals, int secondsBetweenNumbers){
    for(int i=amountIntervals; i>0; i--){
            sleep_for(seconds(secondsBetweenNumbers));
            cout<<i<<endl<<endl;
           }
}

int main(){
    srand(time(NULL));
    int computerNumChoice=(random()%50)+1;
    int userNumGuess=0;
    cout<<"Please select a nuber between 1 and 50."<<endl;
    while(userNumGuess!=computerNumChoice){
        cin>>userNumGuess;
        if(userNumGuess>50 || userNumGuess<=0){
            cout<<"invalid input please select anumber between 1 and 50"<<endl;
        }else{
            if(userNumGuess>computerNumChoice){
               Countdown(5,1);
               cout<<"Too large"<<endl;
            }else if(userNumGuess<computerNumChoice){
                Countdown(5,1);
                cout<<"Too small"<<endl;
             }else{
                Countdown(5,1);
                cout<<"Correct, You Win!"<<endl;
            
             }
        }
        
    }
    
}

/*
Please select a nuber between 1 and 50.
51
invalid input please select anumber between 1 and 50
-1
invalid input please select anumber between 1 and 50
0
invalid input please select anumber between 1 and 50
25
5

4

3

2

1

Too small
37
5

4

3

2

1

Too small
43
5

4

3

2

1

Too large
40
5

4

3

2

1

Too small
42
5

4

3

2

1

Correct, You Win!

*/