#ifndef LISTING_H
#define LISTING_H

#include <iostream>
#include <string>
#include <iomanip>

#include "Price.h"
#include "Category.h"

using namespace std;
using namespace cat;

class Listing {

    friend ostream& operator<<(ostream&, const Listing&);

    public:
    //constructor
    Listing(string user, string title, Category category, string description, const Price& price) : user(user), title(title), category(category), description(description), price(price) {};

    //member functions
    //corresponds to alphabetical order by title
    bool lessThan(Listing& listing) const { return title < listing.title;}
    void print(ostream&) const;

    //getters
    string getUser() const {return user;}
    string getTitle() const {return title;}
    string getDescription() const {return description;}
    Category getCategory() const {return category;}
    Price getPrice() const {return price;}



    private:
    //member vars
    string user, title, description;
    Category category;
    Price price;

};
#endif
