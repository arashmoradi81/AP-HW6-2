#ifndef T6_PERSON_H
#define T6_PERSON_H

#include <iostream>
#include "Address.h"

using namespace std;

class Person {
private:
    string name;
    string id;
    Address address;
public:
    Person();

    Person(const Person &p);

    const string &getName() const;

    void setName(const string &name);

    const string &getId() const;

    void setId(const string &id);

    const Address &getAddress() const;

    void setAddress(const Address &address);

    const Person& operator =(const Person& p);
};


#endif //T6_PERSON_H
