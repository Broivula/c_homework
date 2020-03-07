#pragma once
#include <string>
#include <memory>
using std::string;
using std::unique_ptr;

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
    string getUsername() { return *username; };
    double getMoney() { return *money; };
    void insertMoney(double amount) { *money += amount; };
};


