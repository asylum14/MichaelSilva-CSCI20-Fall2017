#include <iostream>
#include <string>
using namespace std;
class Monster {
   private:
   string head_;
   string eyes_;
   string ears_;
   string mouth_;
   string nose_;
   public:
   Monster(head,eyes,ears,mouth,nose){
      head_=head;
      eyes_=eyes;
      ears_=ears;
      mouth_=mouth;
      nose_=nose;
      
   }
   SetHead;
   GetHead;
   SetEyes;
   GetEyes;
   SetEars;
   GetEars;
   SetMouth;
   Getmouth;
   SetNose;
   GetNose;
   
   
}


int main() {
  Monster monsterA("Zombus","Vegitas","Wackus","vegitas","wackus");
  Monster monsterB("Franken","Wackus","Vegitas","Wackus","Vegitas");
  Monster monsterC("Happy","Spirtem","Spirtem","Spirtem","Spirtem");
  
  
   string monsterHead[3]={monsterA.GetHead, monsterB.GetHead,monsterC.GetHead }
   string monsterEyes[3]={monsterA.GetEyes, monsterB.GetEyes,monsterC.GetEyes }
   string monsterEars[3]={monsterA.GetEars, monsterB.GetEars,monsterC.GetEars }
   string monsterMouth[3]={monsterA.GetMouth, monsterB.GetMouth,monsterC.GetMouth }
   string monsterNose[3]={monsterA.GetNose, monsterB.GetNose,monsterC.GetNose }
}