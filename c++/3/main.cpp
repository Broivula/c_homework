#include <iostream>
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
  getline(cin, name);
  cout << "how much money?" << endl;
  cin >> money;

  t_card.reset(new TravelCard(name, money));
  cout << "let's try the stamper:" << endl;

  stamper->stamp(inner, &(*t_card));
  
  stamper->printStampedCards();

  *t_card << *stamper;
}
