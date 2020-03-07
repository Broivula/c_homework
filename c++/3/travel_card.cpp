#include "travel_card.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

// the constructor
TravelCard::TravelCard(string _username, double _money) : username(new string(_username)), money(new double(_money))
{
  cout << "..constructing a travelcard for " << getUsername() <<  " with money " << getMoney() <<   endl;
}

// the destructor
TravelCard::~TravelCard()
{
  cout << "..destructor for travelcard object.. " << endl;
  delete username;
  delete money;
}


