 #include <iostream>
 #include <string>
 using namespace std;
 struct Monster{
  string head;
  string eyes;
  string ears;
  string nose;
  string mouth;
 };
 int main(){
  Monster monster;
  monster.head="Happy";
  monster.eyes="wackus";
  monster.ears="wackus";
  monster.nose="vegitas";
  monster.mouth="wackus";
 cout<<monster.head<<" "<<monster.eyes<<" "<<monster.ears<<" "<<monster.nose<<" "<<monster.mouth<<endl;
return 0;
}