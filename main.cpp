#include "Person.h"
#include "Person.cpp"
#include "Address.h"
#include "Address.cpp"
#include "Employee.h"
#include "Employee.cpp"
#include "Boss.h"
#include "Boss.cpp"
#include "Company.h"
#include "Company.cpp"

#include <iostream>

using namespace std;

int main() {
    Address *address;
    address[0]=*new Address("iran","tehran","azadi");
    address[1]=*new Address("iran","mashhad","emam reza");
    address[2]=*new Address("iran","tabriz","valiasr");
    address[3]=*new Address("iran","tehran","enghelab");
    address[4]=*new Address("Switzerland","Zurich","Zurich");
    address[5]=*new Address("iran","esfahan","naghsh jahan");
    address[6]=*new Address("iran","tehran","hemat");
    address[7]=*new Address("iran","tehran","bakeri");
    address[8]=*new Address("iran","tehran","satari");
    address[9]=*new Address("iran","tehran","jomhori");
    Person *person;
    person[0].setName("arash");
    person[0].setName("arvin");
    person[0].setName("amin");
    person[0].setName("erfan");
    person[0].setName("ali");
    person[0].setName("ahmad");
    person[0].setName("mehdi");
    person[0].setName("hadi");
    person[0].setName("amir");
    person[0].setName("farnam");
    person[0].setId("85etf*12897");
    Company company;
    return 0;
}
