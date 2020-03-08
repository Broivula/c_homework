#include <string>
#include <memory>
#include <string.h>
#include <iostream>
using std::string;
using std::unique_ptr;
using std::string;
using std::to_string;
using std::ostream;

class TravelCard {

  private:
    unique_ptr<string> username;
    unique_ptr<double> money;
    unique_ptr<string> lastTimestamp;

 public:
    // constructor
    TravelCard(string username, double money);

    // destructor
    virtual ~TravelCard();

    // other
    const string NEWLINE;
    string getUsername() const { return *username; };
    double getMoney() const { return *money; };
    void insertMoney(double amount) { *money += amount; };
    void negateMoney(double amount);

    void toString();

    friend ostream& operator<<(ostream &os, const TravelCard &t_card);
};


