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
   monsterA.head = "Zombus";
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
   cout<<"Head:"<<monsterA.head<<endl;
   cout<<"Eyes:"<<monsterA.eyes<<endl;
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl;
     //*?Why can't the compiler print multiple object attributes at once by simply inputing the object
 }