#include "travel_card.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

// the constructor
TravelCard::TravelCard(string _username, double _money) : username(_username), money(_money)
{
  cout << "..constructing a travelcard for " << getUsername() <<  " with money " << getMoney() <<   endl;
}

// the destructor
TravelCard::~TravelCard()
{
  cout << "..destructor for travelcard object.. " << endl;
}


