#ifndef EMPLOYEE_H
#define EMPLOYEE_H
 
#include <string>
 
class Employee
{
public:
    // NOTE: Not necessary to give a value to a string, because
    // it will be initialized by the default constructor
    // of the STL string class (optimization tips).
    Employee() : id(0) {}
    Employee(const std::string &newName, int newID);
 
    std::string getName() const;
    int getID() const;
 
    void setName(const std::string &newName);
    void setID(int newID);
 
    bool sameName(const Employee &otherEmployee) const;
 
    void print() const;
 
    ~Employee() {}
    // Since the destructor is empty,
    // it can add the curly brackets here.
 
private:
    std::string name;
    int id;
};
 
#endif
