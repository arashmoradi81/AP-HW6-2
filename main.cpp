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

#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand(time(nullptr));
    Address *address[10];
    address[0]=new Address("iran","tehran","azadi");
    address[1]=new Address("iran","mashhad","emam reza");
    address[2]=new Address("iran","tabriz","valiasr");
    address[3]=new Address("iran","tehran","enghelab");
    address[4]=new Address("Switzerland","Zurich","Zurich");
    address[5]=new Address("iran","esfahan","naghsh jahan");
    address[6]=new Address("iran","tehran","hemat");
    address[7]=new Address("iran","tehran","bakeri");
    address[8]=new Address("iran","tehran","satari");
    address[9]=new Address("iran","tehran","jomhori");
    Person *person[10];
    person[0]->setName("arash");
    person[1]->setName("arvin");
    person[2]->setName("amin");
    person[3]->setName("erfan");
    person[4]->setName("ali");
    person[5]->setName("ahmad");
    person[6]->setName("mehdi");
    person[7]->setName("hadi");
    person[8]->setName("amir");
    person[9]->setName("farnam");
    person[0]->setId("85etf*12897");
    person[1]->setId("86etf*12897");
    person[2]->setId("87etf*12897");
    person[3]->setId("88etf*12897");
    person[4]->setId("89etf*12897");
    person[5]->setId("90etf*12897");
    person[6]->setId("91etf*12897");
    person[7]->setId("92etf*12897");
    person[8]->setId("93etf*12897");
    person[9]->setId("94etf*12897");
    for (int i = 0; i < 10; ++i) {
        person[i]->setAddress(*address[i]);
    }
    Employee *employee[10];
    for (int i = 0; i < 10; ++i) {
        employee[i]=new Employee(rand()%10,rand()%10,rand()%10,rand()%10,*person[i]);
    }
    Boss *boss=new Boss(10,**employee);
    Company company=*new Company(1500,boss,employee);
    cout<<company.averageEfficiency()<<endl;
    company.gift();
    cout<<company.isEnoughBudget()<<endl;
    company.payForService();
    company.swapBossEmployee();
    company.maxEfficiency();
    company.saveFile();
    return 0;
}
