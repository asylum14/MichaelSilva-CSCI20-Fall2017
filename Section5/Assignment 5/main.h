#include "class.h"
#include <stdio.h>      // printf, scanf, puts, NULL 
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
#include <fstream>      //file inout and output
#include <sstream>
int const PLAYERS=10;
int const TEAMS=2;
int const ASCII_COMMA=44;
double average(double rating[PLAYERS]);
double standardDeviation(double rating[PLAYERS],double average);
ifstream fin;
ofstream fout; 
double overallStandardDeviation;
double overallAverage;
Player players[PLAYERS];
double teamPerformance[TEAMS];  //This stat is used to try to account for any random unknown variables
double teamRatingAverage[TEAMS];
double teamRatingSum[TEAMS];
double playerRatings[PLAYERS]; 
int j; //counting variable for line
int statIndex;
double kills;
double deaths;
double hours;
string team;
string line;
stringstream stringToInt;
