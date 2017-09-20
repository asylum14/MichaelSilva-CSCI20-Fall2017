//Created By: April Browne
 //Created On: 8/22/2016
 //*comments added by :Michael Silva
 #include <iostream>
 using namespace std;
 
 struct monster{ //*struct definition
  string head;
  string eyes;
  string ears;
  string mouth;
  string nose;//*Struct attributes
 };//*? Why does this end with a semicolon unlike other things in curly brackets
 //*struct must be defined before int main
 int main()
 {
   monster monsterA;
   monster monsterB;//*
   monsterA.head = "Zombus";
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
   monsterB.head = "Happy";
   monsterB.eyes = "wackus";
   monsterB.ears = "Wackus";
   monsterB.nose = "Vegitas";
   monsterB.mouth = "Wackus";
   cout<<"Monster A"<<endl;//*
   cout<<"Head:"<<monsterA.head<<endl;
   cout<<"Eyes:"<<monsterA.eyes<<endl;
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl<<endl;
   
   cout<<"Monster B"<<endl;//*
   cout<<"Head:"<<monsterB.head<<endl;//*
   cout<<"Eyes:"<<monsterB.eyes<<endl;//*
   cout<<"Ears:"<<monsterB.ears<<endl;//*
   cout<<"Nose:"<<monsterB.nose<<endl;//*
   cout<<"Mouth:"<<monsterB.mouth<<endl;//*
     //*?Why can't the compiler print multiple object attributes at once by simply inputing the object
 }