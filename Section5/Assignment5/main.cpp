#include "main.h"


double average(double rating[PLAYERS]){
    double sum=0;
    for(int i=0;i<PLAYERS;i++){
        sum=sum+rating[i];
    }
    double average=sum/PLAYERS;
    return average;
}
double standardDeviation(double rating[PLAYERS],double average){
    double sum=0;
    for(int i=0;i<PLAYERS;i++){
        sum=sum+pow((rating[i]-average),2);
    }
    
    double standardDeviation=sqrt(sum/PLAYERS);
    return standardDeviation;
}
int main(){
    Player players[PLAYERS]={};
    ifstream fin;
    ofstream fout;
    string line;   
    double kills;
    double deaths;
    double hours;
    string team;
    int j=0;
    int statIndex=0;
    srand (time(0));
    fin.open("input.txt");
    fout.open("output.txt");
    int teamGamesWon[TEAMS]={0,0};
    while(teamGamesWon[0]<3 && teamGamesWon[1]<3){
   Player players[PLAYERS]={
                            Player(163,15,189,"Team1"),
                            Player(233,557,85,"Team1"),
                            Player(124,9,87,"Team1"),
                            Player(510,482,98,"Team1"),
                            Player(134,159,35,"Team1"),
                            Player(377,173,55,"Team2"),
                            Player(56,92,25,"Team2"),
                            Player(70,19,52,"Team2"),
                            Player(43,69,22,"Team2"),
                            Player(206,191,70,"Team2")
        
    };
   /*while(!fin.eof()){
       
       getline(fin,line);
       if(statIndex%4==0){
           kills=0;
       }
       if(statIndex%4==1){
           deaths=0;
       }
       if(statIndex%4==2){
           hours=0;
       }
       if(statIndex%4==3){
           team=line;
           players[j]=Player(kills,deaths,hours,team);
            j++;
            kills=0;
            deaths=0;
            hours=0;
            team =" ";
       }
        
       statIndex++;
   }*/
   
    for(int i=0;i<PLAYERS;i++){
       playerRatings[i]=players[i].GetScore();  //collects the players scores to be averaged
    }
     overallAverage=average(playerRatings);
     overallStandardDeviation=standardDeviation(playerRatings,overallAverage);
    
        for(int i=0;i<PLAYERS;i++){
            players[i].SetRating(overallAverage,overallStandardDeviation);
                if(players[i].GetTeam()=="Team1"){
                    teamRatingSum[0]=teamRatingSum[0]+players[i].GetRating();
                    teamRatingAverage[0]=teamRatingSum[0]/5;
                    teamPerformance[0]=((((rand()%21)+90))*teamRatingAverage[0])/100;//this line of code takes the team average rating and multiplies it by a random number between .9 and 1.1 
                    
                }else if(players[i].GetTeam()=="Team2"){
                    teamRatingSum[1]=teamRatingSum[1]+players[i].GetRating();
                    teamRatingAverage[1]=teamRatingSum[1]/5;
                    teamPerformance[1]=((((rand()%21)+90))*teamRatingAverage[1])/100;
                }
                
        }
        
        if(teamPerformance[0]>teamPerformance[1]){
            fout<<"Team 1: "<<teamPerformance[0]<<" Team 2: "<<teamPerformance[1]<<endl<<"Team 1 Wins"<<endl;
            teamGamesWon[0]++;
        }else if(teamPerformance[0]<teamPerformance[1]){
            fout<<"Team 1: "<<teamPerformance[0]<<" Team 2: "<<teamPerformance[1]<<endl<<"Team 2 Wins"<<endl;
            teamGamesWon[1]++;
        }else{
            fout<<"Team 1: "<<teamPerformance[0]<<" Team 2: "<<teamPerformance[1]<<endl<<"Draw"<<endl;
        }
    }
    if(teamGamesWon[0]>=3){
        fout<<endl<<"Team 1 Wins "<<teamGamesWon[0]<<"-"<<teamGamesWon[1]<<endl;
    }if(teamGamesWon[1]>=3){
        fout<<endl<<"Team 2 Wins "<<teamGamesWon[1]<<"-"<<teamGamesWon[0]<<endl;
    }
    
     fin.close();
     fout.close(); 
}

   