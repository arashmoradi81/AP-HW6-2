#include "Address.h"


Address::Address(string country,string city,string street) {
    Address::country=country;
    Address::city= city;
    Address::street= street;
}

void Address::setCountry(const string &country) {
    Address::country=country;
}

const string &Address::getCountry() const {
    return country;
}

const string &Address::getCity() const {
    return city;
}

void Address::setCity(const string &city) {
    Address::city = city;
}

const string &Address::getStreet() const {
    return street;
}

void Address::setStreet(const string &street) {
    Address::street = street;
}

