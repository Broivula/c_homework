#pragma once
#include <string>
using std::string;

class TravelCard {


  private:
    std::string *username;
    double *money;
    std::string *lastTimestamp;

 public:
    // constructor
    TravelCard(string username, double money);

    // destructor
    ~TravelCard();
    string getUsername() { return *username; };
    double getMoney() { return *money; };
    void insertMoney(double amount) { *money += amount; };
};


