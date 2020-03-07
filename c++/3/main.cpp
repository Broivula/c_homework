#include <iostream>
#include "travel_card.h"

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(){

  string name;
  double money;

  cout << "starting now... " << endl;
  cout << "give me your name: " << endl;
  cin >> name;
  cout << "how much money?" << endl;
  cin >> money;

  cout << "instantiating..." << endl;
  TravelCard card(name, money);
  cout << "done." << endl;
}
