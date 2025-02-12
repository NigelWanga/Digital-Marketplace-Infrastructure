#include "Listing.h"

ostream& operator<<(ostream& o, const Listing& l)
{
    l.print(o);
    return o;
}

//Override the stream insertion operator << 
//to “print” the Listing on the given ostream
void Listing::print(ostream& os) const
{
    os << "Title: " << title << endl;
    os << "Category: " << category << endl;
    os << "Description: " << description << endl;
    os << "Price: ";
    price.print(os); //check this!!
    os << "Seller: " << user << endl;

}
