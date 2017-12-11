#include "class.h"
#include <stdio.h>      // printf, scanf, puts, NULL 
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
#include <fstream>
int const PLAYERS=10;
int const TEAMS=2;
int const ASCII_COMMA=44;
double average(double rating[PLAYERS]);
double standardDeviation(double rating[PLAYERS],double average);
double overallStandardDeviation;
double overallAverage;
double teamPerformance[TEAMS];  //This stat is used to try to account for any random unknown variables
double teamRatingAverage[TEAMS];
double teamRatingSum[TEAMS];
double playerRatings[PLAYERS]; 
