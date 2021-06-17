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

//    friend ostream& operator << (ostream out,Boss a);
//
//    friend istream& operator >> (istream in,Boss a);
};


#endif //T6_BOSS_H
