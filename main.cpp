#include "Person.h"
#include "Person.cpp"
#include "Address.h"
#include "Address.cpp"
#include "Employee.h"
#include "Employee.cpp"
#include <iostream>

using namespace std;

int main() {
    Address a;
    Person p;
    a.setCountry("iran");
    cout<<a.getCountry()<<endl;
    p.setId("85e59523");
    cout<<p.getId()<<endl;
    cout<<p.validate("85eft89423");
    Person p1;
    p1=p;
    cout<<p.getId()<<endl;
    return 0;
}
