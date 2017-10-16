/*
Created by: Michael Silva 
Created on: 10/16/2017
Description: Determine the Tax payment owed for income tax given the person's Tax information.
*/

#include <iostream>
#include <string>
using namespace std;
class TaxPayers{
    private:
        string name_;
        bool isMarried_;
        int wages_;
        int withheldPayment_;
    public:
        void SetVariables(string name,bool isMarried, int wages,int withheldPayment);
        int DeterminePayment();
        void Print();
};
void TaxPayers::SetVariables(string name,bool isMarried, int wages,int withheldPayment){
    name_=name;
    isMarried_=isMarried;
    wages_=wages;
    withheldPayment_=withheldPayment;
}
int TaxPayers::DeterminePayment(){
    int payment=0;
    switch(isMarried_){
        case true:
                  if(wages_<=18650){
                     payment=(wages_*0.1)-withheldPayment_;
                  }else if(wages_<=75900){
                      payment=(1865+(0.15*(wages_-18650)))-withheldPayment_;
                   }else if(wages_<153100){
                          payment=(10452.5+(.25*(wages_-75900)))-withheldPayment_;
                    }else if(wages_<233350){
                        payment=(29752.5+(.28*(wages_-153100)))-withheldPayment_;
                    }else if(wages_<416700){
                        payment=(52222.5+(.33*(wages_-233350)))-withheldPayment_;
                    }else if(wages_<=0){
                        payment=0;    
                    }else{
                        payment=(112728+(.396*(wages_-470700)))-withheldPayment_;
                    } 
            break;
        case false:
            if(wages_<=9325){
                     payment=(wages_*0.1)-withheldPayment_;
                  }else if(wages_<=37950){
                      payment=(932.5+(0.15*(wages_-9325)))-withheldPayment_;
                   }else if(wages_<91900){
                          payment=(5226.25+(.25*(wages_-37950)))-withheldPayment_;
                    }else if(wages_<191650){
                        payment=(18713.75+(.28*(wages_-91900)))-withheldPayment_;
                    }else if(wages_<416700){
                        payment=(46643.75+(.33*(wages_-191650)))-withheldPayment_;
                    }else if(wages_<=0){
                        payment=0;
                        
                    }else{
                        payment=(112728+(.396*(wages_-416700)))-withheldPayment_;
                    } 
            break;
    }
        return payment;
}
void TaxPayers::Print(){
    string marriageOutput; //a variable to output a string whether marriage is true or false
    switch(isMarried_){
    case true:
    marriageOutput="Married";
    break;
    
    case false:
    marriageOutput="Single";
    break;
    }
    cout<<"Name: "<<name_<<endl;
    cout<<"Marriage Status: "<<marriageOutput<<endl;
    cout<< "Annual Wage: "<<wages_<<endl;
    cout<<"Tax Deduction: "<<withheldPayment_<<endl;
    cout<<"Tax Owed: "<<DeterminePayment()<<endl<<endl;
}

int main(){
    TaxPayers joe;
    TaxPayers alfonso;
    TaxPayers bridget;
    TaxPayers wendy;
    
    joe.SetVariables("Joe Vandal", false, 12100, 250);
    joe.Print();
    alfonso.SetVariables("Alfonso Haynes", true, 32351,3192);
    alfonso.Print();
    bridget.SetVariables("Bridget Rowe", false, 88229, 12057);
    bridget.Print();
    wendy.SetVariables("Wendy Joesph", true, 73291, 6972);
    wendy.Print();
    
}

/*






*/
