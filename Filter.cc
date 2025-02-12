#include "Filter.h"


//Filter

ostream& operator<<(ostream& os, const Filter& fl) {
    fl.print(os);
    return os;
}

void Filter::print(ostream& os) const {
    os << "This filter will select everything." << endl;
}



//Price_Filter

bool Price_Filter::matches(const Listing& listing) const {
    return listing.getPrice() >= min && listing.getPrice() <= max;
}


void Price_Filter::print(ostream& os) const
{
    os << "Matches listings in the price range: " << min << " - " << max << endl;
}


//Cat_Filter

bool Cat_Filter::matches(const Listing& listing) const {
    //check if category of listing matches category member variable
    return listing.getCategory() == category;
}

void Cat_Filter::print(ostream& os) const {
    os << "Matches listings with the category: " << category << endl;
}

//PriceAndCat_Filter

bool PriceAndCat_Filter::matches(const Listing& listing) const {
    //check if the price of  listing is within specified price range
    return Cat_Filter::matches(listing) && Price_Filter::matches(listing);
}

void PriceAndCat_Filter::print(ostream& os) const {
    os << "Matches listings with the category: " << category
       << " and price range: " << min << " - " << max << endl;
}