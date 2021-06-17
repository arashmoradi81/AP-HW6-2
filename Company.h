#ifndef T6_COMPANY_H
#define T6_COMPANY_H

#include "Boss.h"

class Company {
private:
    int budget;
    Boss* boss;
    Employee* employee[];
public:
    Company(int budget,Boss* boss,Employee* employee[]);

    Company(const Company& c);

    ~Company();

    int getBudget() const;

    void setBudget(int budget);

    Boss *getBoss() const;

    void setBoss(Boss *boss);

    Employee *const *getEmployee() const;
};


#endif //T6_COMPANY_H
