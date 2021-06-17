#ifndef T6_BOSS_H
#define T6_BOSS_H

#include "Employee.h"

class Boss: public Employee {
private:
    int numberOfEmployees;
public:
    Boss(int numberOfEmployees,Employee e);

    Boss(const Boss& b);

    int getNumberOfEmployees() const;

    void setNumberOfEmployees(int n);

    Boss& operator = (Boss *b);

    int calculateSalary() const override;
};


#endif //T6_BOSS_H