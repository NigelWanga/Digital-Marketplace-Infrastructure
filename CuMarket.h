#ifndef CUMARKET_H
#define CUMARKET_H

#include "Category.h"
#include "Price.h"
#include "Listing.h"
#include "List.h"
#include "Filter.h"
#include "defs.h"
#include <iostream>
#include <string>

using namespace std;

class CuMarket {

    public:
    //constructor
    CuMarket() {listings = new List<Listing*> ;};

    //destructor
    ~CuMarket() {delete listings;};
 
    //member functions
    //add a listing to the market
    void addListing(const string& userName, const string& title, const Category& category, const string& description, const Price& price);
    void removeListing(const string& title);
    void searchListings(const Filter& filter, List<Listing*>& searchList); 


    private:
    //mem vars
    List<Listing*> * listings; //List of Listing pointers

};
#endif
