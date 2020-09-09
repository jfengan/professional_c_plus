#include <iostream>
#include "utils/employeestruct.h"

using namespace std;

int main(){
    Employee anEmployee;
    anEmployee.firstInitial = 'M';
    anEmployee.lastInitial = 'L';
    anEmployee.employeeNumber = 20659297;
    anEmployee.salary = 8000;

    cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
    cout << "Number: " << anEmployee.employeeNumber << endl;
    cout << "Salary: $" << anEmployee.salary << endl;
    return 0;
}