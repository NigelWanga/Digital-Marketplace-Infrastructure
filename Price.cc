#include "Price.h"

//Override the stream insertion operator << to “print” the Price on the given ostream
ostream& operator<<(ostream& o, const Price& p) {
    p.print(o);
    return o;
}

//Override the stream extraction operator >> to read a Price from the given istream
istream& operator>>(istream& i, Price& p) {

    string s;
    if (getline(i, s, '\n')) {
        if (!s.empty() && s[0] == '$'){
            s.erase(0,1);
        }
        p.value = stod(s);
    }
    return i;
}

//This should return true if the value is equal to
//the min or the max, or it falls between the min and max. Otherwise return false
bool Price::inRange(Price& min, Price& max)
{
    return ((value >= min.value) || (value <= max.value)); 
}

void Price::print(ostream& os) const
{
    os << fixed << setprecision(2)  << "$" << value << endl; 
}

