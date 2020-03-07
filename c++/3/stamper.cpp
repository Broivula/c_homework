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

Stamper::stamp(Prices p, TravelCard *t_card)
{
  // for now, let's just print stuff
  cout << "price: " << p << endl;
  cout << "owner: " << t_card->getUsername() << endl;
}
