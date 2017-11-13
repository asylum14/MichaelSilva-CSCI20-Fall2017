/*
Created by:Michael Silva
Created on: 10/23/2017
Description: this program is used to simulate a shopping cart for a store(array of objects)
*/

#include <iostream>
#include <string>

using namespace std;
class Product{
    private:
        int Inventory_;
        double Price_;
        string Name_;
        int Quantity_;
        
    public:
    Product(){
        Inventory_=0;
        Price_=0;
    }
    Product(int inventory, double price,string name){
        Inventory_=inventory;
        Price_=price;
        Name_=name;
    }
    
    int GetQuantity(){
        return Quantity_;
    }
    int GetInventory(){
        return Inventory_;
    }
     double GetPrice(){
         return Price_;
     }
     string GetName(){
         return Name_;
     }
    double BuyItem(int quantity){
        double totalPrice=0.0;
        
        if((quantity<=Inventory_)){
            Inventory_=Inventory_-quantity;
            totalPrice=(quantity*Price_)+totalPrice;
            Quantity_=quantity;
            return totalPrice;
        }else {return -1;}
        
    } 
    void Print(){
        cout<<"The Store has "<<Inventory_<<" "<<Name_<<"(s) left"<<endl;
        cout<<"you currently have "<<Quantity_<<" "<<Name_<<"(s) in your cart"<<endl;
    }
    
};

int main(){
    int const NUM_ITEMS =10;
    double totalPrice=0;
    int amountOfItems=0;
    Product shoppingCart[NUM_ITEMS];
    
    shoppingCart[0]=Product(20,3.25,"Apple");
    shoppingCart[1]=Product(10,4.5,"Bannana");
    shoppingCart[2]=Product(5,8,"Tomato");
    shoppingCart[3]=Product(3,4.25,"Potato");
    shoppingCart[4]=Product(15,7.3,"Jalepeno");
    shoppingCart[5]=Product(60,6.2,"Lettuce");
    shoppingCart[6]=Product(30,1.5,"Carrot");
    shoppingCart[7]=Product(15,8,"Rice");
    shoppingCart[8]=Product(40,6.5,"Peas");
    shoppingCart[9]=Product(25,3.85,"Peach");
    
    
    
    for(int i =0; i<NUM_ITEMS;i++){
        cout<<"How many "<<shoppingCart[i].GetName()<<" do you want?";
        cin>>amountOfItems;
        
        if(shoppingCart[i].BuyItem(amountOfItems)!=-1){
            totalPrice=shoppingCart[i].BuyItem(amountOfItems)+totalPrice;
            
        }else{
            while(shoppingCart[i].BuyItem(amountOfItems)==-1){
                cout<<"Please enter a valid amount. anything less than or equal to  "<<shoppingCart[i].GetInventory()<<" will work"<<endl;
                cin>>amountOfItems;
            }
            totalPrice=shoppingCart[i].BuyItem(amountOfItems)+totalPrice;
            
        }
        shoppingCart[i].Print();
    }
    
    
    cout<<"The total Price of all your Items is "<<totalPrice<<endl;
    
    
}/*

 */
