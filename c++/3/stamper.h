#include <iostream>
#include <memory>
#include <vector>
#include "travel_card.h"
enum prices{
  inner=280,
  outer=350,
};

using std::vector;
using std::unique_ptr;
class Stamper{

  private:
    vector<TravelCard *> stampedCards;
  public:
    // constructor
    Stamper();

    // destructor
    virtual ~Stamper();

    // other
    void registerStampedCard(TravelCard *t_card);
    void stamp(prices p, TravelCard *t_card);
    vector<TravelCard *> getStampedCards(){ return stampedCards; };
    void printStampedCards();
    char initiateTravel();

    friend void operator<<(TravelCard& t_card, Stamper& st);
};
