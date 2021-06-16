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
    Address();

    void setCountry(const string& country);

    const string &getCountry() const;

    const string &getCity() const;

    void setCity(const string &city);

    const string &getStreet() const;

    void setStreet(const string &street);
};


#endif //T6_ADDRESS_H
