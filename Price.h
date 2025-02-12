#ifndef PRICE_H
#define PRICE_H


#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class Price {
    
    friend ostream& operator<<(ostream&, const Price&);
    friend istream& operator>>(istream&, Price&);

    public:
    Price(double value): value(value) {};
    Price(): value(0) {};

    //member functions
    bool inRange(Price& min, Price& max);
    void print(ostream&) const;

    //>=
      bool operator>=(const Price& other) const {
        return value >= other.value;
    }

    //<=
      bool operator<=(const Price& other) const {
        return value <= other.value;
    }

    private:
    double value;

};
#endif