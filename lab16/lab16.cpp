/*
Created by: Michael Silva 
Created on: 9/12/2017
Description: This code is used to give an acurate overview of a stock portfolio.

*/

 #include <iostream>
 #include <string>
 using namespace std;
 struct Company{
  string name;
  string sector;
  double current_share_price;
  int numSharesOwned;
  };
 int main(){
     
     
     Company ford;
     Company albertson;
     Company apple;
     Company tesla;
     Company wells_fargo;
     Company microsoft;
     Company test_company;
     
     
     
     ford.name ="FordM";
     ford.sector="A";
     ford.current_share_price=18.76;
     ford.numSharesOwned=87;
     double ford_total_Value=ford.current_share_price* ford.numSharesOwned;
     
     albertson.name ="albertsn";
     albertson.sector="C";
     albertson.current_share_price=34.39;
     albertson.numSharesOwned=542;
     double albertson_total_Value=albertson.current_share_price* albertson.numSharesOwned;
     
     apple.name ="AAPL";
     apple.sector="T";
     apple.current_share_price=145.91;
     apple.numSharesOwned=5;
     double apple_total_Value=apple.current_share_price* apple.numSharesOwned;
    
     tesla.name ="TSLA";
     tesla.sector="A";
     tesla.current_share_price=375.64;
     tesla.numSharesOwned=50;
     double tesla_total_Value=tesla.current_share_price* tesla.numSharesOwned;
    
     wells_fargo.name ="WFC";
     wells_fargo.sector="F";
     wells_fargo.current_share_price=53.02;
     wells_fargo.numSharesOwned=1368;
     double wells_fargo_total_Value=wells_fargo.current_share_price* wells_fargo.numSharesOwned;
     
     microsoft.name ="microsoft";
     microsoft.sector="T";
     microsoft.current_share_price=75.10;
     microsoft.numSharesOwned=100;
     double microsoft_total_Value=microsoft.current_share_price* microsoft.numSharesOwned;
     
     cin>>test_company.name;
     cin>>test_company.sector;
     cin>>test_company.current_share_price;
     cin>>test_company.numSharesOwned;
     double test_company_total_value= test_company.current_share_price*test_company.numSharesOwned;
    
     
     
     double total_portfolio_value=microsoft_total_Value+wells_fargo_total_Value+tesla_total_Value+apple_total_Value+albertson_total_Value+ford_total_Value+test_company_total_value;
     cout<<"Stock Name        No. of Shares         Current Value          Total Value"<<endl<<endl;
     cout<<ford.name<<"             "<<ford.numSharesOwned<<"                    "<<ford.current_share_price<<"                  "<<ford_total_Value<<endl;
     cout<<albertson.name<<"          "<<albertson.numSharesOwned<<"                   "<<albertson.current_share_price<<"                  "<<albertson_total_Value<<endl;
     cout<<apple.name<<"              "<<apple.numSharesOwned<<"                     "<<apple.current_share_price<<"                 "<<apple_total_Value<<endl;
     cout<<tesla.name<<"              "<<tesla.numSharesOwned<<"                    "<<tesla.current_share_price<<"                 "<<tesla_total_Value<<endl;
     cout<<wells_fargo.name<<"               "<<wells_fargo.numSharesOwned<<"                  "<<wells_fargo.current_share_price<<"                  "<<wells_fargo_total_Value<<endl;
     cout<<microsoft.name<<"         "<<microsoft.numSharesOwned<<"                    "<<microsoft.current_share_price<<"                  "<<microsoft_total_Value<<endl;
     cout<<test_company.name<<"               "<<test_company.numSharesOwned<<"                    "<<test_company.current_share_price<<"                    "<<test_company_total_value<<endl;
     cout<<endl<<endl<<"Total Portfolio value: "<<total_portfolio_value<<endl;
     
return 0;
     
}
/*
input: Nin, T,15,100


Stock Name        No. of Shares         Current Value          Total Value

FordM             87                    18.76                  1632.12
albertsn          542                   34.39                  18639.4
AAPL              5                     145.91                 729.55
TSLA              50                    375.64                 18782
WFC               1368                  53.02                  72531.4
microsoft         100                    75.1                  7510
nin               100                    15                    1500


Total Portfolio value: 121324


*/