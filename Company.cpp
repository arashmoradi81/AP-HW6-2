#include "Company.h"

Company::Company(int budget,Boss* boss,Employee* employee[]) {
    Company::budget=budget;
    *Company::boss=boss;
    *Company::employee=*employee;
}

Company::Company(const Company &c) {
    budget=c.budget;
    boss=c.boss;
    *employee=*c.employee;
}

Company::~Company() {
    delete boss;
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        delete[] employee[i];
    }
}

int Company::getBudget() const {
    return budget;
}

void Company::setBudget(int budget) {
    Company::budget = budget;
}

Boss *Company::getBoss() const {
    return boss;
}

void Company::setBoss(Boss *boss) {
    Company::boss = boss;
}

Employee *const *Company::getEmployee() const {
    return employee;
}

Employee Company::maxEfficiency() {
    int x=0;
    int max=employee[0]->efficiency();
    for (int i = 1; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->efficiency()>max) {
            max = employee[i]->efficiency();
            x=i;
        }
    }
    return *employee[x];
}
