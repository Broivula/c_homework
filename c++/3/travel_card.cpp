#include "travel_card.h"
#include <iostream>
#include <memory>
using std::string;
using std::cout;
using std::endl;
using std::unique_ptr;

// the constructor
TravelCard::TravelCard(string _username, double _money) : username(unique_ptr<string>(new string(_username))), money(unique_ptr<double>(new double(_money)))
{
  cout << "..constructing a travelcard for " << getUsername() <<  " with money " << getMoney() <<   endl;
}

// the destructor
TravelCard::~TravelCard()
{
  cout << "..destructor for travelcard object.. " << endl;
  //delete username;
  //delete money;
}


