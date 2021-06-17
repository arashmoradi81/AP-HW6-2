#include "Boss.h"

Boss::Boss(int numberOfEmployees,Employee e) : Employee(e){
    Boss::numberOfEmployees=numberOfEmployees;
}

Boss::Boss(const Boss &b):Employee(b) {
    numberOfEmployees=b.numberOfEmployees;
}

int Boss::getNumberOfEmployees() const {
    return numberOfEmployees;
}

void Boss::setNumberOfEmployees(int n) {
    numberOfEmployees = n;
}

Boss &Boss::operator=(Boss *b) {
    this->numberOfEmployees=b->numberOfEmployees;
    this->setHourWork(b->getHourWork());
    this->setSalaryPerHour(b->getSalaryPerHour());
    this->setWorkToDo(b->getWorkToDo());
    this->setWorkDone(b->getWorkDone());
    this->setName(b->getName());
    this->setId(b->getId());
    this->setAddress(b->getAddress());
    return *this;
}

int Boss::calculateSalary() const {
    int s=getHourWork()*getSalaryPerHour()*getWorkDone()/getWorkToDo();
    s*=(115/100);
    return s;
}

ostream &operator<<(ostream out, Boss a) {
    out<<"numberOfEmployee:"<<a.numberOfEmployees;
    return out;
}

istream &operator>>(istream in, Boss a) {
    in>>a.numberOfEmployees;
    return in;
}
