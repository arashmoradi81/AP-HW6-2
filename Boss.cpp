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

Boss &Boss::operator=(const Boss &b) {
    this->numberOfEmployees=b.numberOfEmployees;
    this->setHourWork(b.getHourWork());
    this->setSalaryPerHour(b.getSalaryPerHour());
    this->setWorkToDo(b.getWorkToDo());
    this->setWorkDone(b.getWorkDone());
    this->setName(b.getName());
    this->setId(b.getId());
    this->setAddress(b.getAddress());
    return *this;
}
