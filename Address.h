#ifndef T6_ADDRESS_H
#define T6_ADDRESS_H

#include "iostream"
using namespace std;

class Address {
private:
    string country;
    string city;
    string street;
public:
    Address(string country,string city,string street);

    void setCountry(const string& country);

    const string &getCountry() const;

    const string &getCity() const;

    void setCity(const string &city);

    const string &getStreet() const;

    void setStreet(const string &street);

    friend ostream& operator << (ostream out,Address a);

    friend istream& operator >> (istream in,Address a);
};


#endif //T6_ADDRESS_H
