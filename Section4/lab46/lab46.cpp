/*
Created by:Michael Silva
Created on: 10/23/2017
Description:  This program takes in file input, for student grades, and outputs their informationto a html file.
*/
#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;
int Ascii_To_Int(int asc){
   int i=0;
   if(asc==48){
      i=0;
   }else if(asc==49){
      i=1;
   }else if(asc==50){
      i=2;
   }else if(asc==51){
      i=3;
   }else if (asc ==52){
      i=4;
   }else if (asc ==53){
      i=5;
   }else if (asc ==54){
      i=6;
   }else if (asc ==55){
      i=7;
   }else if (asc ==56){
      i=8;
   }else if (asc ==57){
   i=9;
   }
   return i;
}
int Grade_Values(int ascii){
    int value=0;
    if(ascii==65||ascii==97){
        value=4;
    }else if(ascii==66||ascii==98){
        value=3;
    }else if(ascii==67||ascii==99){
        value=2;
    }else if(ascii==68||ascii==100){
        value=1;
    }else{
        value=0;
    }
    return value;
}


int main(){
    string line;
    ifstream fin;
    ofstream fout;
    ofstream style;
    int classes=0;
    double unit_sum=0;
    double grade_point_sum=0;
    double class_unit_sum=0;
    double class_grade_point_sum=0;
    
    
    fin.open("input.txt");
    fout.open("output.html");
    style.open("style.css");
    
    style<<"p{"<<endl<<"padding-left:40px;"<<endl<<"color:red;"<<"}"<<endl;
    style<<"h4{"<<endl<<"padding-left:20px;"<<endl<<"}"<<endl;
    
    fout<<"<!DOCTYPE html>"<<endl<<"<html>"<<endl<<"<head>"<<endl<<"<title>GRADES</title>"<<endl<<"<link rel=\"stylesheet\" href=\"style.css\">"<<endl<<"</head>"<<endl<<"<body>"<<endl;
    
     while(!fin.eof())
   {
      getline(fin, line); 
      if(isalpha(line[0])){
      fout<<"<h1>"<<line<<"</h1>"<<endl;      
     }else{
         fout<<"<h4>"<<"Number of Classes "<<"</h4>"<<endl<<"<p>"<<line<<"</p>"<<endl;
         classes=Ascii_To_Int(line[0]);
        for(int i=0;i<classes;i++){
            getline(fin,line);
            fout<<"<h4>"<<"Units:"<<"</h4>"<<"<p>"<<line[0]<<"</p>"<<endl<<"<h4>"<<"Grade:"<<"</h4>"<<"<p>"<<line[2]<<"</p>"<<endl;
            fout<<"<h4>"<<"Grade Point"<<"</h4>"<<"<p>"<<Ascii_To_Int(line[0])*Grade_Values(line[2])<<"</p>"<<endl;
            unit_sum=unit_sum+Ascii_To_Int(line[0]);
            class_unit_sum=class_unit_sum+Ascii_To_Int(line[0]);
            grade_point_sum=Ascii_To_Int(line[0])*Grade_Values(line[2])+grade_point_sum;
            class_grade_point_sum=class_grade_point_sum+Ascii_To_Int(line[0])*Grade_Values(line[2]);
        }
        fout<<"<h4>"<<"Total Units "<<"</h4>"<<"<p>"<<unit_sum<<"</p>"<<endl;
        fout<<"<h4>"<<"Total Grade Points"<<"</h4>"<<"<p>"<<grade_point_sum<<"</p>"<<endl;
        fout<<"<h4>"<<"GPA "<<"</h4>"<<"<p>"<<grade_point_sum/unit_sum<<"</p>"<<endl<<endl;
        unit_sum=0;
        grade_point_sum=0;
        
        }   
          
    }
    fout<<"<h1>"<<"Totals"<<"</h1>"<<endl;
    fout<<"<h4>"<<"Total Class Units"<<"</h4>"<<"<p>"<<class_unit_sum<<"</p>"<<endl;
    fout<<"<h4>"<<"Total Class Grade Points"<<"</h4>"<<"<p>"<<class_grade_point_sum<<"</p>"<<endl;
    fout<<"<h4>"<<"Class Grade Point Average"<<"</h4>"<<"<p>"<<class_grade_point_sum/class_unit_sum<<"</p>"<<endl;
    
    fout<<"</body>"<<endl;
    fin.close();
   fout.close();
   return 0;
    
}



/*
<!DOCTYPE html>
<html>
<head>
<title>GRADES</title>
<link rel="stylesheet" href="style.css">
</head>
<body>
<h1>Suzy Cue</h1>
<h4>Number of Classes </h4>
<p>4</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>A</p>
<h4>Grade Point</h4><p>12</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>A</p>
<h4>Grade Point</h4><p>12</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>A</p>
<h4>Grade Point</h4><p>12</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>B</p>
<h4>Grade Point</h4><p>9</p>
<h4>Total Units </h4><p>12</p>
<h4>Total Grade Points</h4><p>45</p>
<h4>GPA </h4><p>3.75</p>

<h1>Joe Joseph</h1>
<h4>Number of Classes </h4>
<p>4</p>
<h4>Units:</h4><p>4</p>
<h4>Grade:</h4><p>D</p>
<h4>Grade Point</h4><p>4</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>C</p>
<h4>Grade Point</h4><p>6</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>B</p>
<h4>Grade Point</h4><p>9</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>C</p>
<h4>Grade Point</h4><p>6</p>
<h4>Total Units </h4><p>13</p>
<h4>Total Grade Points</h4><p>25</p>
<h4>GPA </h4><p>1.92308</p>

<h1>Jillian Smith</h1>
<h4>Number of Classes </h4>
<p>5</p>
<h4>Units:</h4><p>4</p>
<h4>Grade:</h4><p>C</p>
<h4>Grade Point</h4><p>8</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>C</p>
<h4>Grade Point</h4><p>6</p>
<h4>Units:</h4><p>4</p>
<h4>Grade:</h4><p>C</p>
<h4>Grade Point</h4><p>8</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>B</p>
<h4>Grade Point</h4><p>9</p>
<h4>Units:</h4><p>3</p>
<h4>Grade:</h4><p>C</p>
<h4>Grade Point</h4><p>6</p>
<h4>Total Units </h4><p>17</p>
<h4>Total Grade Points</h4><p>37</p>
<h4>GPA </h4><p>2.17647</p>

<h1>Totals</h1>
<h4>Total Class Units</h4><p>42</p>
<h4>Total Class Grade Points</h4><p>107</p>
<h4>Class Grade Point Average</h4><p>2.54762</p>
</body>


*/