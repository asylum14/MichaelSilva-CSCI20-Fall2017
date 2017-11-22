/*
Created by:Michael Silva
Created on: 11/20/2017
Description:  This program takes in file input to compare with an answer key to return the student's test classroom[count/3].Grade
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
class Students{  //represents a student in a classroom,variables are  grade and name  
    public:
    double Grade;
    string Name;
    Students(){
        Name="unknown";
        Grade=0;
    }
    Students(string name,double Grade){
        Name=name;
        Grade=Grade;
    }
   
};
int main(){
    string line;
    string answer_line;
    ifstream fin;       //represents the input document
    ifstream answers; //represents the answer document
    ofstream fout;      //represents the output document
    int const NUM_STUDENTS=9;
    int const ASCII_QUESTION_MARK=63;   //ASCII value for a question mark
    int const ASCII_SPACE=32;           //ASCII value for space
    Students classroom[NUM_STUDENTS];
    int space_count=0; //space_count is used to count the total number of spaces
    int count =0;   //count is used to count the number of students
    int i=0;    // i is used to count along the line index
    int j=0;    //j is used to count along the answer_line index
    int k=1; //k is used to count spaces in between questions
    
    for(int i =0;i<NUM_STUDENTS;i++){
    classroom[i]=Students("",0.0);
    }
    
 

    fin.open("input.txt");
    answers.open("answer.txt");
    fout.open("output.txt");
    
    getline(answers,answer_line);
    while(!fin.eof()){
        getline(fin,line);
        //there are two spaces in between the start of the line and the multiple choice questions
        while(space_count<2){
            if(line[i]==ASCII_SPACE){
                space_count++;
            }
            i++;
        }
        
        classroom[count].Name.append(line);
        classroom[count].Name.erase(classroom[count].Name.begin()+i,classroom[count].Name.end()); //cuts out everything except the name of the student
        cout<<classroom[count].Name<<endl;
        fout<<classroom[count].Name<<endl;
        //check all of the multiple choice and true and false questions
        while(space_count<20){
            if(line[i]==answer_line[j] && (line[i]!=ASCII_SPACE)){
                classroom[count].Grade++;
            }else if(line[i]!=answer_line[j] && line[i]!=ASCII_QUESTION_MARK && line[i]!=ASCII_SPACE){
                classroom[count].Grade=classroom[count].Grade-0.25;
                cout<<"Missed question: "<<k<<endl;
                fout<<"Missed question: "<<k<<endl;
            }
            if(line[i]==ASCII_SPACE){
                space_count++;
                k++;
            }
            i++;
            j++;
        }
        // checks the written questions to see if the first three characters of the multiple choice question section of the line and the answer to see if they are the same
        while(space_count<22){
            if(line.compare(i,3,answer_line,j,3)==0){
                classroom[count].Grade++;
            }else if(line.compare(i,3,answer_line,j,3)!=0 && line[i]!=ASCII_QUESTION_MARK && line[i]!=ASCII_SPACE){
                classroom[count].Grade=classroom[count].Grade-0.25;
                cout<<"missed Question: "<<k<<endl;
                fout<<"missed Question: "<<k<<endl;
            }
            
            while(line[i]!=ASCII_SPACE){
                i++;
                }
                while(answer_line[j]!=ASCII_SPACE){
                j++;
                }
            if(line[i]==ASCII_SPACE){
                    space_count++;
                    i++;
                    j++;
                    k++;
                }
                
        }
        
        if(line.compare(i,3,answer_line,j,3)==0){
                classroom[count].Grade++;
            }else if(line.compare(i,3,answer_line,j,3)!=0 && line[i]!=ASCII_QUESTION_MARK && line[i]!=ASCII_SPACE){
                classroom[count].Grade=classroom[count].Grade-0.25;
                cout<<"missed Question: "<<k<<endl;
                fout<<"missed Question: "<<k<<endl;
            }
            //makes sure no person gets a negative score
        if(classroom[count].Grade<0.1){
            classroom[count].Grade=0;
        }
        cout<<"Test Score:"<<classroom[count].Grade<<endl;
        fout<<"Test Score:"<<classroom[count].Grade<<endl;
        cout<<"percentage:"<<(100*classroom[count].Grade)/21<<endl;
        fout<<"percentage:"<<(100*classroom[count].Grade)/21<<endl;
        if(((100*classroom[count].Grade)/21)>=90){
            cout<<"Grade:A"<<endl;
            fout<<"Grade:A"<<endl;
        }else if(((100*classroom[count].Grade)/21)>=80){
            cout<<"Grade:B"<<endl;
            fout<<"Grade:B"<<endl;
        }else if(((100*classroom[count].Grade)/21)>=70){
            cout<<"Grade:C"<<endl;
            fout<<"Grade:C"<<endl;
        }else if(((100*classroom[count].Grade)/21)>=60){
            cout<<"Grade:D"<<endl;
            fout<<"Grade:D"<<endl;
        }else{
            cout<<"Grade:F"<<endl;
            fout<<"Grade:F"<<endl;
        }
        cout<<endl;
        fout<<endl;
     count++;
     
    
     i=0;
     j=0;
     k=1;
     space_count=0;
    }
    fin.close();
    answers.close();
    fout.close();
    
}
/*

*/