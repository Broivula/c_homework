#include <iostream>
#include "travel_card.h"
#include "stamper.h"
using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::unique_ptr;
int main(){

  string name;
  double money;
  unique_ptr<TravelCard> t_card; 
  unique_ptr<Stamper> stamper;

  stamper.reset(new Stamper());

  cout << "starting now... " << endl;
  cout << "give me your name: " << endl;
  cin >> name;
  cout << "how much money?" << endl;
  cin >> money;

  t_card.reset(new TravelCard(name, money));
  cout << "..constructor done, let's see if we can access the pointer values: " << t_card->getMoney() << " " << t_card->getUsername() << endl;
  cout << "done." << endl;
}
