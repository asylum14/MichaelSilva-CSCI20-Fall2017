#include "class.h"
Player::Player(){
    Kills_=0;
    Deaths_=0;
    HoursPlayed_=0;
    Rating_=0;
    Team_="UNDEFINED";
}
Player::Player(double Kills,double Deaths, double HoursPlayed, string Team){
    Kills_=Kills;
    Deaths_=Deaths;
    HoursPlayed_=HoursPlayed;
    Team_=Team;
}
double Player::GetKills(){
    return Kills_;
}
void Player::SetKills(double Kills){
    Kills_=Kills;
}
double Player::GetDeaths(){
    return Deaths_;
}
void Player::SetDeaths(double Deaths){
    Deaths_=Deaths;
}
double Player::GetHoursPlayed(){
    return HoursPlayed_;
}
void Player::SetHoursPlayed(double Hours){
    HoursPlayed_=Hours;
}
double Player::GetRating(){
    return Rating_;
}
void Player::SetRating(double average,double standardDeviation){
    double percent=0;
    //Depending on what the zscore is depends on the percent in the array
    double zScorePercents[70]={0.0013,0.0019,0.0026,0.0035,0.0047,0.0062,0.0082,0.0107,0.0139,0.0179,0.0228,0.0287,0.0359,0.0446,0.0548,0.0668,0.0808,0.0968,0.1151,0.1357,0.1587,0.1841,0.2119,0.2420,0.2743,0.3085,0.3446,0.3821,0.4207,0.4602,0.5,0.5398,0.5793,0.6179,0.6554,0.6915,0.7257,0.758,0.7881,0.8159,0.8413,0.8643,0.8849,0.9032,0.9192,0.9332,0.9452,0.9554,0.9641,0.9713,0.9772,0.9821,0.9861,0.9893,0.9918,0.9938,0.9953,0.9965,0.9974,0.9981,0.9987};
    
    double zScore=(GetScore()-average)/standardDeviation;
    int zScoreRounded=round((zScore+3)*10);
    percent=zScorePercents[zScoreRounded];
    Rating_=60+(percent*(100-60));
    
}
double Player::GetScore(){
     double score=(GetKills()-GetDeaths())/GetHoursPlayed();
     return score;
}
string Player::GetTeam(){
    return Team_;
}
void Player::SetTeam(string Team){
    Team_=Team;
}