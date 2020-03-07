#include "stamper.h"
#include <iostream>
#include <memory>
using std::string;
using std::cout;
using std::endl;
using std::unique_ptr;

Stamper::Stamper()
{
  cout << "stamper constructor.. " << endl;
}

Stamper::~Stamper()
{
  cout << "stamper destructor.. " << endl;
}

void Stamper::registerStampedCard(TravelCard *t_card)
{
  // add it to the array of used cards
  stampedCards.push_back(t_card);    
}

void Stamper::stamp(prices p, TravelCard *t_card)
{
  // for now, let's just print stuff
  t_card->negateMoney((double)p);
  cout << "travel done, money left: " << t_card->getMoney() << endl;
  this->registerStampedCard(t_card);
}

void Stamper::printStampedCards()
{
    cout << "printing last 5 stampers" << endl;
    for(std::vector<TravelCard *>::iterator it = stampedCards.begin(); it != stampedCards.end(); it++){
     cout << **(it) << endl;
    }
}

