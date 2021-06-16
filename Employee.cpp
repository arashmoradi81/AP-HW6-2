#include "Employee.h"

Employee::Employee() {
    hourWork=0;
    salaryPerHour=0;
    workToDo=0;
    workDone=0;
}

Employee::Employee(const Employee &e) {
    hourWork=e.hourWork;
    salaryPerHour=e.salaryPerHour;
    workToDo=e.workToDo;
    workDone=e.workDone;
}

Employee &Employee::operator=(const Employee &e) {
    this->hourWork=e.hourWork;
    this->salaryPerHour=e.salaryPerHour;
    this->workToDo=e.workToDo;
    this->workDone=e.workDone;
    return *this;
}

int Employee::getHourWork() const {
    return hourWork;
}

void Employee::setHourWork(int hourWork) {
    Employee::hourWork = hourWork;
}

int Employee::getSalaryPerHour() const {
    return salaryPerHour;
}

void Employee::setSalaryPerHour(int salaryPerHour) {
    Employee::salaryPerHour = salaryPerHour;
}

int Employee::getWorkToDo() const {
    return workToDo;
}

void Employee::setWorkToDo(int workToDo) {
    Employee::workToDo = workToDo;
}

int Employee::getWorkDone() const {
    return workDone;
}

void Employee::setWorkDone(int workDone) {
    Employee::workDone = workDone;
}
