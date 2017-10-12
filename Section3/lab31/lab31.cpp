/*
Created by: Michael Silva 
Created on: 8/28/2017
Description: This is a program that calculates the best phone deal for each individual user
*/

//user1: 2 phones 0 tablets 5gb data 
//user2: 3 phones 1 tablets 15gb data
//user3: 1 phones 0 tablets 0 gb data 


#include <iostream>

using namespace std;

int ATTUnlimitedPlusPlan(int numPhones,int numTablets){
    int cost=0;
    
    if(numPhones==1){
        cost=90;
    }
    else if(numPhones==2){
        cost = 145;
        
    }
    else if(numPhones>2){
        cost = 145 + ((20*(numPhones-2)));
    }else {cost=0;}
    cost = cost +(10*numTablets);
    return cost;
}
    
int ATTUnlimitedChoicePlan(int numPhones,int numTablets){
    int cost=0;
    if(numPhones==1){
        cost=60; 
    }
    else if(numPhones==2){
        cost = 115;
    }
    else if(numPhones>2){
        cost = 115 + (20*(numPhones-2));
    }else{cost=0;}
    cost = cost +(10*numTablets);
    return cost;
}

int ATTFamilyPlan(int numPhones,int numTablets,int dataUsed){
    int cost=0;
    if(dataUsed<=1){
        cost=30;
    }
    if(dataUsed>1&&dataUsed<=3){
        cost=40;
    }
    if(dataUsed>3&&dataUsed<=6){
        cost=60;
    }
    if(dataUsed>6&&dataUsed<=10){
        cost=80;
    }
    if(dataUsed>10&&dataUsed<=16){
        cost=90;
    }
    if(dataUsed>16&&dataUsed<=25){
        cost=110;
    }
    cost=cost+(20*numPhones)+(10*numTablets);
    return cost;
}

int VerizonUnlimitedPlan(int numPhones,int numTablets){
    int cost=0;
    if(numPhones==1){
        cost =80;
    }
    if(numPhones>1){
        cost=110;
    }else{cost=0;}
    cost=cost+(20*numPhones)+(10*numTablets);
    return cost;
}

int SprintUnlimitedPlan(int numPhones){
    int cost =0;
    if(numPhones==1){
        cost=60;
    }
    if(numPhones==2){
        cost=60+40;
    }
    if(numPhones>2){
        cost=(60+40)+(30*(numPhones-2));
    }
    return cost;
}

int SprintTwoGBPlan(int numPhones,int dataUsed){
    int cost=0;
    if(dataUsed<=2){
    cost=numPhones*40;
    }else{cost=0;}
    return cost;
}

int determineLowestCost(int numPhones,int numTablets,int dataUsed){
    int planGroupA=0;
    int planGroupB=0;
    int planGroupC=0;
    
    int planGroupSEMI=0;
    int planGroupFinal=0;
    //group A determined
    //group winners cannot be 0 
    if(ATTUnlimitedPlusPlan(numPhones,numTablets)<ATTUnlimitedChoicePlan(numPhones,numTablets)){
        if(ATTUnlimitedPlusPlan(numPhones,numTablets)!=0){
        planGroupA=ATTUnlimitedPlusPlan(numPhones,numTablets);
        }else{
            planGroupA=ATTUnlimitedChoicePlan(numPhones,numTablets);
        }
    }else{
        if(ATTUnlimitedChoicePlan(numPhones,numTablets)!=0){
        planGroupA=ATTUnlimitedChoicePlan(numPhones,numTablets);
        }else{
            planGroupA=ATTUnlimitedPlusPlan(numPhones,numTablets);
        }
    }
    
    //group B determined
    if(ATTFamilyPlan(numPhones,numTablets,dataUsed)<VerizonUnlimitedPlan(numPhones,numTablets)){
       if(ATTFamilyPlan(numPhones,numTablets,dataUsed)!=0){
           planGroupB=ATTFamilyPlan(numPhones,numTablets,dataUsed);
       }else{
            planGroupB=VerizonUnlimitedPlan(numPhones,numTablets);
       }
    }else{
        if(VerizonUnlimitedPlan(numPhones,numTablets)!=0){
        planGroupB=VerizonUnlimitedPlan(numPhones,numTablets);
        }else{
            planGroupB=ATTFamilyPlan(numPhones,numTablets,dataUsed);
        }
    }
    
    //group C determined
    if(SprintTwoGBPlan(numPhones,dataUsed)<SprintUnlimitedPlan(numPhones)){
        if(SprintTwoGBPlan(numPhones,dataUsed)!=0){
        planGroupC=SprintTwoGBPlan(numPhones,dataUsed);
        }else{
             planGroupC=SprintUnlimitedPlan(numPhones);
        }
    }else{
        if(SprintUnlimitedPlan(numPhones)!=0){
        planGroupC=SprintUnlimitedPlan(numPhones);
        }else{
            planGroupC=SprintTwoGBPlan(numPhones,dataUsed);
        }
    }
    
    if(planGroupA<planGroupB){
        if(planGroupA!=0){
        planGroupSEMI=planGroupA;
        }else{planGroupSEMI=planGroupB;}
    }else{
        if(planGroupB!=0){
        planGroupSEMI=planGroupB;
        }else{planGroupSEMI=planGroupA;}
    }
    
    if(planGroupSEMI<planGroupC){
        if(planGroupSEMI!=0){
        planGroupFinal=planGroupSEMI;
        }else{planGroupFinal=planGroupC;}
    }else{
        if(planGroupC!=0){
        planGroupFinal=planGroupC;
        }else{planGroupFinal=planGroupSEMI;}
    }
    return planGroupFinal;
}
struct Users{
    int numPhones;
    int numTablets;
    int dataUsed;
};
int main(){
    Users userA;
    Users userB;
    Users userC;
    
    userA.numPhones=2;
    userA.numTablets=0;
    userA.dataUsed=5;
    
    userB.numPhones=3;
    userB.numTablets=1;
    userB.dataUsed=15;
    
    userC.numPhones=1;
    userC.numTablets=0;
    userC.dataUsed=0;
    
    cout<<"User A:"<<endl;
    cout<<"ATT Unlimited Choice Plan: "<<ATTUnlimitedChoicePlan(userA.numPhones,userA.numTablets)<<endl;
    cout<<"ATT Unlimited Plus Plan: "<<ATTUnlimitedPlusPlan(userA.numPhones,userA.numTablets)<<endl;
    cout<<"ATT Family Plan: "<<ATTFamilyPlan(userA.numPhones,userA.numTablets,userA.dataUsed)<<endl;
    cout<<"Verizon Unlimited Plan: "<<VerizonUnlimitedPlan(userA.numPhones,userA.numTablets)<<endl;
    cout<<"Sprint Unlimted Plan:"<<SprintUnlimitedPlan(userA.numPhones)<<endl;
    cout<<"Sprint Two GB Plan:"<<SprintTwoGBPlan(userA.numPhones,userA.dataUsed)<<endl<<endl;
    
    cout<<"User B:"<<endl;
    cout<<"ATT Unlimited Choice Plan: "<<ATTUnlimitedChoicePlan(userB.numPhones,userB.numTablets)<<endl;
    cout<<"ATT Unlimited Plus Plan: "<<ATTUnlimitedPlusPlan(userB.numPhones,userB.numTablets)<<endl;
    cout<<"ATT Family Plan: "<<ATTFamilyPlan(userB.numPhones,userB.numTablets,userB.dataUsed)<<endl;
    cout<<"Verizon Unlimited Plan: "<<VerizonUnlimitedPlan(userB.numPhones,userB.numTablets)<<endl;
    cout<<"Sprint Unlimted Plan: "<<SprintUnlimitedPlan(userB.numPhones)<<endl;
    cout<<"Sprint Two GB Plan: "<<SprintTwoGBPlan(userB.numPhones,userB.dataUsed)<<endl<<endl;
    
    cout<<"User C:"<<endl;
    cout<<"ATT Unlimited Choice Plan: "<<ATTUnlimitedChoicePlan(userC.numPhones,userC.numTablets)<<endl;
    cout<<"ATT Unlimited Plus Plan: "<<ATTUnlimitedPlusPlan(userC.numPhones,userC.numTablets)<<endl;
    cout<<"ATT Family Plan: "<<ATTFamilyPlan(userC.numPhones,userC.numTablets,userC.dataUsed)<<endl;
    cout<<"Verizon Unlimited Plan: "<<VerizonUnlimitedPlan(userC.numPhones,userC.numTablets)<<endl;
    cout<<"Sprint Unlimted Plan: "<<SprintUnlimitedPlan(userC.numPhones)<<endl;
    cout<<"Sprint Two GB Plan: "<<SprintTwoGBPlan(userC.numPhones,userC.dataUsed)<<endl<<endl;
    
    cout<<"Lowest plans"<<endl;
    cout<<"User A: "<<determineLowestCost(userA.numPhones,userA.numTablets,userA.dataUsed)<<endl;
    cout<<"User B: "<<determineLowestCost(userB.numPhones,userB.numTablets,userB.dataUsed)<<endl;
    cout<<"User C: "<<determineLowestCost(userC.numPhones,userC.numTablets,userC.dataUsed)<<endl;
    
    
}
/*
User A:
ATT Unlimited Choice Plan: 115
ATT Unlimited Plus Plan: 145
ATT Family Plan: 100
Verizon Unlimited Plan: 150
Sprint Unlimted Plan:100
Sprint Two GB Plan:0

User B:
ATT Unlimited Choice Plan: 145
ATT Unlimited Plus Plan: 175
ATT Family Plan: 160
Verizon Unlimited Plan: 180
Sprint Unlimted Plan: 130
Sprint Two GB Plan: 0

User C:
ATT Unlimited Choice Plan: 60
ATT Unlimited Plus Plan: 90
ATT Family Plan: 50
Verizon Unlimited Plan: 20
Sprint Unlimted Plan: 60
Sprint Two GB Plan: 40

Lowest plans
User A: 100
User B: 130
User C: 20

*/