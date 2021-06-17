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

bool Employee::validate(string id) {
    bool t = false;
    char yearId[2];
    yearId[0] = id[0];
    yearId[1] = id[1];
    int year = stoi(yearId);
    if (isInt(id[0]) && isInt(id[1])) {
        if (year >= 84 && year <= 99) {
            if (id.length() == 8) {
                if (id[2]=='*') {
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
                if (id[2]=='*' && !isInt(id[3])) {
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
                if (id[2]=='*' && !isInt(id[3]) && !isInt(id[4])) {
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

int Employee::calculateSalary() const {
    return (hourWork*salaryPerHour*workDone/workToDo);
}

int Employee::efficiency() const {
    return (workDone*100/workToDo);
}
