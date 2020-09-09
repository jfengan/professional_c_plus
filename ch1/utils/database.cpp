#include "database.h"
#include <iostream>
#include <stdexcept>

namespace Records{
    Employee& Database::addEmployee(const string& firstName, const string& lastName){
        Employee theEmployee(firstName, lastName);
        theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
        theEmployee.hire();
        mEmployees.push_back(theEmployee);
        return mEmployees[mEmployees.size() - 1];
    }

    Employee& Database::getEmployee(int employeeNumber){
        for (auto& employee : mEmployees){
            if (employee.getEmployeeNumber() == employeeNumber){
                return employee;
            }
        }
        throw std::logic_error("No employee found.");
    }

    void Database::displayAll() const{
        for (auto& employee : mEmployees){
            employee.display();
        }
    }

    void Database::displayCurrent() const{
        for (const auto& employee : mEmployees){
            if (employee.isHired()) 
                employee.display();
        }
    }

    void Database::displayFormer() const{
        for (const auto& employee : mEmployees){
            if (!employee.isHired()) 
                employee.display();
        }
    }

}