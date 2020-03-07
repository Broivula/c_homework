#include <iostream>
#include "travel_card.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(){

  string name;
  double money;
  TravelCard *t_card;
  cout << "starting now... " << endl;
  cout << "give me your name: " << endl;
  cin >> name;
  cout << "how much money?" << endl;
  cin >> money;

  t_card = new TravelCard(name, money); 
  cout << "..constructor done, let's see if we can access the pointer values: "<< t_card->getMoney() << t_card->getUsername() << endl;
  cout << "done." << endl;
}
