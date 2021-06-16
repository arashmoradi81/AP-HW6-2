#include "Person.h"

Person::Person(): name(0),id(0),address() {}

Person::Person(const Person &p) {
    name=new string;
    id=new string ;
    address=new Address;
    name=p.name;
    id=p.id;
    address=p.address;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    Person::id = id;
}

const Address &Person::getAddress() const {
    return address;
}

void Person::setAddress(const Address &address) {
    Person::address = address;
}

const Person &Person::operator=(const Person &p) {
    this->name=p.name;
    this.id=p.id;
    this->address=p.address;
    return *this;
}
