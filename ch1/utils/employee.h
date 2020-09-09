#pragma once
#include <string>
using std::string;

namespace Records{
    const int kDefaultStartingSalary = 30000;
    class Employee{
    public:
        Employee() = default;
        Employee(const string& firstName, const string& lastName);
        void promote(int raiseAmount = 1000);
        void demote(int demeritAmount = 1000);
        void hire();
        void fire();
        void display() const;

        void setFirstName(const string& firstName);
        const string& getFirstName() const;

        void setLastName(const string& lastName);
        const string& getLastName() const;

        void setEmployeeNumber(int employeeNumber);
        int getEmployeeNumber() const;

        void setSalary(int newSalary);
        int getSalary() const;

        bool isHired() const;

    private:
        string mFirstName;
        string mLastName;
        int mEmployeeNumber = -1;
        int mSalary = kDefaultStartingSalary;
        bool mHired = false;
    };
};