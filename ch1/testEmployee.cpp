#include <iostream>
#include "utils/employee.h"

using std::cout;
using Records::Employee;

int main(){
    cout << "Testing the Employee class. \n";

    Employee emp;
    emp.setFirstName("Jiahao");
    emp.setLastName("FENG");
    emp.setEmployeeNumber(20659297);
    emp.promote();
    emp.promote(50);
    emp.hire();
    emp.display();
    return 0;
}