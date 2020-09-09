#include <iostream>
#include "utils/database.h"

using namespace Records;

int main(){
    Database myDB;
    Employee& emp1 = myDB.addEmployee("Jiahao", "FENG");
    emp1.fire();

    Employee& emp2 = myDB.addEmployee("Xiaojin", "XU");
    emp2.setSalary(100000);

    Employee& emp3 = myDB.addEmployee("Xudong", "CHEN");
    emp3.setSalary(10000);
    emp3.promote();

    std::cout << "all employees: " << std::endl << std::endl;
    myDB.displayAll();

    std::cout << std::endl << "current employees: " << std::endl << std::endl;
    myDB.displayCurrent();

    std::cout << std::endl << "former employees: " << std::endl << std::endl;
    myDB.displayFormer();
}