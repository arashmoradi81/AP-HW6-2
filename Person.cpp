#include "Person.h"

Person::Person(string name,string id,Address address):address(address) {
    if (!validate(id)){
        cout<<" invalid id ! "<<endl;
        exit(1);
    }
    Person::name=name;
    Person::id=id;
}

Person::Person(const Person &p):address(p.address) {
    name = p.name;
    id = p.id;
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
    Person::id=id;
}

const Address &Person::getAddress() const {
    return address;
}

void Person::setAddress(const Address &address) {
    Person::address = address;
}

Person &Person::operator=(const Person &p) {
    this->name = p.name;
    this->id = p.id;
    this->address = p.address;
    return *this;
}

bool Person::validate(string id) {
    bool t = false;
    char yearId[2];
    yearId[0] = id[0];
    yearId[1] = id[1];
    int year = stoi(yearId);
    if (isInt(id[0]) && isInt(id[1])) {
        if (year >= 84 && year <= 99) {
            if (id.length() == 8) {
                if (!isInt(id[2])) {
                    for (int i = 3; i <= 7; ++i) {
                        if (isInt(id[i])) {
                            if (id[i] - 48 > 6 || id[i] - 48 < 4)
                                t = true;
                            else
                                return false;
                        } else
                            return false;
                    }
                }
            }
            if (id.length() == 9) {
                if (!isInt(id[2]) && !isInt(id[3])) {
                    for (int i = 4; i <= 8; ++i) {
                        if (isInt(id[i])) {
                            if (id[i] - 48 > 6 || id[i] - 48 < 4)
                                t = true;
                            else
                                return false;
                        } else
                            return false;
                    }
                }
            }
            if (id.length() == 10) {
                if (!isInt(id[2]) && !isInt(id[3]) && !isInt(id[4])) {
                    for (int i = 5; i <= 9; ++i) {
                        if (isInt(id[i])) {
                            if (id[i] - 48 > 6 || id[i] - 48 < 4)
                                t = true;
                            else
                                return false;
                        } else
                            return false;
                    }
                }
            }
        }
    }
    return t;
}

bool Person::isInt(char str) {
    if (str >= 48 && str <= 57)
        return true;
    else
        return false;
}
