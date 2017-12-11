#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Player{
    private:
    double Rating_;
    double Kills_;
    double Deaths_;
    double HoursPlayed_;
    string Team_;
    public:
    Player();
    Player(double Kills,double Deaths,double HoursPlayed,string Team);
    double GetRating();
    void SetRating(double average,double standardDeviation);
    double GetKills();
    void SetKills(double kills);
    double GetDeaths();
    void SetDeaths(double Deaths);
    double GetHoursPlayed();
    void SetHoursPlayed(double Hours);
    double GetScore();
    string GetTeam();
    void SetTeam(string Team);
};