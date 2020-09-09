#include <iostream>
#include <memory>
#include "utils/employeestruct.h"

int main(){
    // auto anEmployee = std::make_unique<Employee>(); c++14
    std::unique_ptr<Employee> anEmployee (new Employee);
    anEmployee->employeeNumber = 20659297;
    anEmployee->salary = 8000;
    anEmployee->firstInitial = 'F';
    anEmployee->lastInitial = 'H';

    std::cout << "Salary: $" << anEmployee->salary << std::endl;
}