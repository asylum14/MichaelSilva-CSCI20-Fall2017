/*
Created by:Michael Silva
Created on: 10/23/2017
Description:
*/

#include <iostream>

using namespace std;
int main(){
    double totalPrice=0;
    int size =10;
    int inventory [10]={5,3,2,6,9,7,8,5,1,6};
    double prices [10]= {5.0,3.35,6.12,8.65,3.25,10.36,15.45,9.68,4.35,6.25};
    int cartQuantity [10]={};
    for(int i =0; i<size;i++){
        cin>>cartQuantity[i];
        inventory[i]=inventory[i]-cartQuantity[i];
        
        //if the invntory is lower than zero add the amount taken away to return it to the default value
        //than requst the user re-input a value until the inventory will no lnger be less than zero
            if(inventory[i]<0){
                
               inventory[i]=inventory[i]+cartQuantity[i];
                while(cartQuantity[i]>inventory[i]){
                    cout<<"error:Too many of one item in the cart please enter a valid number. anything less than or equal to "<<inventory[i]<<endl;
                    
                    cin>>cartQuantity[i];
                }
                inventory[i]=inventory[i]-cartQuantity[i];
            }
                totalPrice=totalPrice+(cartQuantity[i]*prices[i]);
                
            
        
        
    }
   //output all Inventory left
        for(int i =0;i<size;i++){
            cout<<"Inventory Left of index "<<i<<": "<<inventory[i]<<endl<<endl;
            
            
        }
        // output the items in the users cart
        for(int i =0; i<size; i++){
            cout<<"Items bought of index "<<i<<":"<<cartQuantity[i]<<endl<<endl;
            
        }
        
        cout<<"Total Price:"<<totalPrice<<endl;
}
     
