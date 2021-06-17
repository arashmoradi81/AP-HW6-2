#ifndef T6_EMPLOYEE_H
#define T6_EMPLOYEE_H

#include "Person.h"

class Employee : public Person {
private:
    int hourWork;
    int salaryPerHour;
    int workToDo;
    int workDone;
public:
    Employee(int hourWork,int salaryPerHour,int workToDo,int workDone,Person person);

    Employee( const Employee &e);

    Employee& operator = (const Employee& e);

    int getHourWork() const;

    void setHourWork(int hourWork);

    int getSalaryPerHour() const;

    void setSalaryPerHour(int salaryPerHour);

    int getWorkToDo() const;

    void setWorkToDo(int workToDo);

    int getWorkDone() const;

    void setWorkDone(int workDone);

    bool validate(string id) override;

    virtual int calculateSalary() const;

    int efficiency() const;
};


#endif //T6_EMPLOYEE_H
