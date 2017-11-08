/*
Created by:Michael Silva
Created on: 10/23/2017
Description:
*/

#include <iostream>

using namespace std;
class ArrayTools{
    private:
        int Size_;
        int Array_[];
        int Min_;
        int Max_;
    public:
           ArrayTools(int array[],int size){
            Size_=size;
            for(int i = 0; i<size; i++){
            Array_[]=array[i];
            }
        }
    
    
        int Find_min(int lowEnd,int highEnd){
            Min_=Array_[lowEnd];
            for(int i = lowEnd; i<highEnd; i++){
                if(Array_[i]<=Min_){
                    Min_=Array_[i];
                }
            }
            return Min_;
        }
        
        int Find_max(int lowEnd,int highEnd){
            Max_=Array_[lowEnd];
            for(int i = lowEnd; i<highEnd; i++){
                if(Array_[i]>=Max_){
                    Max_=Array_[i];
                }
            }
            return Max_;
        }
        
        int Find_sum(){
            int Sum=0;
            for(int i =0; i<Size_; i++){
                Sum=Array_[i]+Sum;
                cout<<Sum<<endl;
               }
           return Sum;
            
        }
        
      /*FIXME*/  int Search(int value){
          int foundValue=0;
            for(int i=0; i<Size_; i++){
                if(Array_[i]==value){
                    
                    foundValue=i;
                    
                }else if(Array_[i]!=value && i==Size_){
                        foundValue =-1;
                        
                    }
                    
                    
                }
                return foundValue;
                
            }
        
        bool Is_sorted(){
            
            bool isSorted=true;
            for(int i =1; i < Size_; i++){
                if(Array_[i-1]<=Array_[i]){
                    isSorted=true;
                }else{
                    isSorted =false;
                    i=Size_;
                }
                
            }
            return isSorted;
        }    
        void Print(){
            for(int i =0 ; i<Size_;i++){
                cout<<Array_[i]<<endl;
            }
          }    
};
    

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    
    return 0;
}