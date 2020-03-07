#include <iostream>
#include <memory>
#include "travel_card.h"
enum Prices{
  inner=2,
  outer=3,
};

using std::unique_ptr;
class Stamper{

  private:
    unique_ptr<TravelCard[]> stampedCards;

  public:
    // constructor
    Stamper();

    // destructor
    virtual ~Stamper();

    // other
    void stamp(Prices p, TravelCard *t_card);
};
