#include "Person.h"
#include "Person.cpp"
#include "Address.h"
#include "Address.cpp"
#include "Employee.h"
#include "Employee.cpp"
#include "Boss.h"
#include "Boss.cpp"
#include "Company.h"
#include "Company.cpp"

#include <iostream>

using namespace std;

int main() {
    Address a("iran","tahran","azadi");
    Person p("arash","85*ft89723",a);
    Person g("arvin","85*ft89723",a);
    Address b=p.getAddress();
    cout<<b.getStreet();
    Employee e(10,2,8,8,p);
    Employee f(10,2,8,8,g);
    Employee s=f;
    s=e;
    cout<<s.getName();
    return 0;
}
