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

Employee* Company::maxEfficiency() {
    int x=0;
    int max=employee[0]->efficiency();
    for (int i = 1; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->efficiency()>max) {
            max = employee[i]->efficiency();
            x=i;
        }
    }
    return employee[x];
}

double Company::averageEfficiency() {
    int sum=0;
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        sum+=employee[i]->efficiency();
    }
    return (double)sum/boss->getNumberOfEmployees();
}

void Company::swapBossEmployee() {
    if (boss->efficiency()<40){
        swap(boss,maxEfficiency());
    }
}

void Company::gift() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        string id=employee[i]->getId();
        char yearId[2];
        yearId[0] = id[0];
        yearId[1] = id[1];
        int year = stoi(yearId);
        if (year<90)
            employee[i]->setHourWork(employee[i]->getHourWork()+5);
        Employee& employee1= *maxEfficiency();
        employee1.setHourWork(employee1.getHourWork()+10);
    }
}

void Company::payForService() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->getAddress().getCity()!="tehran"){
            employee[i]->setHourWork(employee[i]->getHourWork()+7);
        }
    }
}

bool Company::isEnoughBudget() {
    int sum=0;
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        sum+=employee[i]->calculateSalary();
    }
    if (sum<budget)
        return true;
    else
        return false;
}
