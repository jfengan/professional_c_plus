#include <iostream>
#include <string>
#include "employee.h"

using std::cout;
using std::endl;
using std::string;

namespace Records{
    Employee::Employee(const string& firstName, const string& lastName):
        mFirstName(firstName), mLastName(lastName)  {}

    void Employee::promote(int raiseAmount){
        setSalary(getSalary() + raiseAmount);
    }

    void Employee::demote(int deritAmount){
        setSalary(getSalary() - deritAmount);
    }

    void Employee::fire(){
        mHired = false;
    }

    void Employee::hire(){
        mHired = true;
    }

    void Employee::display() const{
        cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
        cout << "-------------------------" << endl;
        cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
        cout << "Employee Number: " << getEmployeeNumber() << endl;
        cout << "Salary: $" << getSalary() << endl;
        cout << endl;
    }

    void Employee::setFirstName(const string& firstName){
        mFirstName = firstName;
    }

    void Employee::setLastName(const string& lastName){
        mLastName = lastName;
    }

    void Employee::setSalary(int salary){
        mSalary = salary;
    }

    void Employee::setEmployeeNumber(int No){
        mEmployeeNumber = No;
    }

    const string& Employee::getFirstName() const{
        return mFirstName;
    }

    const string& Employee::getLastName() const{
        return mLastName;
    }

    int Employee::getEmployeeNumber() const{
        return mEmployeeNumber;
    }

    int Employee::getSalary() const{
        return mSalary;
    }

    bool Employee::isHired() const{
        return mHired;
    }
}