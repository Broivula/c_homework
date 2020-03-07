#include "travel_card.h"
#include <iostream>
#include <iomanip>
#include <memory>
using std::string;
using std::cout;
using std::endl;
using std::unique_ptr;
using std::to_string;
using std::ostream;

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

void TravelCard::negateMoney(double amount){
  *money = *money - amount/100;
  if(getMoney() < 0) *money = 0;
}

void TravelCard::toString(){
  cout << std::setprecision(2) << std::fixed;
  cout << "\nusername: " << *username << "\naccount money: "<< *money << endl;
  cout << "\n ---------- \n" ;
}

ostream& operator<<(ostream& os, const TravelCard& t_card)
{
  os << "\nusername: " << t_card.getUsername()<< "\nmoney left on account: " << t_card.getMoney() << "\n -----------" ;
  return os;
}


