#include "CuMarket.h"

//- if there is room in the list, make a new Listing and add it to the List. Otherwise print out an appropriate error message to cout
void CuMarket::addListing(const string& userName, const string& title, const Category& category, const string& description, const Price& price)
{
    if (listings->isFull()) {
        cout << "Error: List is full" << endl;
        return;
    }
    Listing* newListing = new Listing(userName, title, category, description, price);
    *listings += newListing;
}

//- remove (and delete) the Listing with the given title, or print an error
//message if there is no such listing.
void CuMarket::removeListing(const string& title)
{
    Listing* goner = nullptr;
    for (int i = 0; i < listings->getSize(); i++) {
        if ((*listings)[i]->getTitle() == title) { 
            goner = (*listings)[i];
            break;
        }
    }
    if (goner) {
        *listings -= goner;
        delete goner;
    }
    else {
        cout << "Error: Listing with title " << title << " not found" << endl;
    
    }

}


//Filter through the CuMarket::List. Add every Listing
//that matches the Filter to the searchList
void CuMarket::searchListings(const Filter& filter, List<Listing*>& searchList)
{
    for (int i = 0; i < listings->getSize(); i++) {
        if(filter.matches(*(*listings)[i])) {
            searchList += (*listings)[i];
        }
    }
}
