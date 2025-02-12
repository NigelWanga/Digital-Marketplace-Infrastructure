#ifndef FILTER_H
#define FILTER_H

// #define PRICE_FILTER_H
// #define CAT_FILTER_H
// #define PRICEANDCAT_FILTER_H


#include <iostream>
#include <string>
#include <iomanip>
#include "Listing.h"
#include "Price.h"

using namespace std;

class Filter {

    friend ostream& operator<<(ostream&, const Filter&);

    public:
    //Filter
    virtual bool matches(const Listing&) const {return true;}
    virtual void print(ostream&) const;


};


class Price_Filter: virtual public Filter {

    public:
    //Price_Filter
    Price_Filter(Price min, Price max): min(min), max(max) {}

    //member functions
    virtual bool matches(const Listing&) const override;
    virtual void print(ostream&) const override;

    //member vars
    private:
    Price min, max;
};


class Cat_Filter: virtual public Filter {

    public:
    //Cat_Filter
    Cat_Filter(Category category): category(category) {}

    //member functions
    virtual bool matches(const Listing&) const override;
    virtual void print(ostream&) const override;

    //member vars
    private:
    Category category;
};


class PriceAndCat_Filter: virtual public Price_Filter, virtual public Cat_Filter{

    public:
    //PriceAndCat_Filter
    PriceAndCat_Filter(Price min, Price max, Category category): Price_Filter(min, max), Cat_Filter(category) {};

    //member functions
    virtual bool matches(const Listing&) const override;
    virtual void print(ostream&) const override;

    //member vars
    private:
    Price min, max;
    Category category;
};
#endif
