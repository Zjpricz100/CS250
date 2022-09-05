#include "Employee.h"
 
#include <iostream>
using namespace std;
 
Employee::Employee(const string &newName, int newID)
{
    name = newName;
    id = newID;
}
// Leave a blank line...
string Employee::getName() const
{
    return name;
}
// Leave a blank line...
int Employee::getID() const
{
    return id;
}
// Leave a blank line...
void Employee::setName(const string &newName)
{
    name = newName;
}
// Leave a blank line...
void Employee::setID(int newID)
{
    id = newID;
}
// Leave a blank line...
bool Employee::sameName(const Employee &otherEmployee) const
{
    // Standards applied:
    // * Only one statement is enough.
    // * Do not call functions when member variables are accessible.
    return (name == otherEmployee.name);
}
// Leave a blank line...
void Employee::print() const
{
    // Make sure NOT to call member functions when the
    // member variables of the class are accessible.
    cout << "Employee: " << name << endl
         << "ID: " << id << endl;
}
 
// DO NOT FORGET ABOUT CONST FOR FUNCTIONS
// THESE DEFINITIONS ARE OUT OF THE .H file. ADD EMPLOYEE::
// DONT CALL MEMBER FUNCTIONS WHEN THE VARIABLES ARE AVAIL
 
// name == otherEmployee.name
 
// Is better then
 
// name == otherEmployee.getName()
 
// EFFICIENCY ^^^
