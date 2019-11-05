#include "partTimeEmployee.h"

partTimeEmployee::partTimeEmployee()
{
    //ctor
}

partTimeEmployee::partTimeEmployee(string nameIn, string surnameIn, unsigned int payRateIn, unsigned int hoursWorkedIn)
:personType(nameIn,surnameIn)
{
    payRate = payRateIn;
    hoursWorked = hoursWorkedIn;
}

unsigned int partTimeEmployee::calculateSalary(){
    return payRate*hoursWorked;
}

void partTimeEmployee::print(){
   personType::print();
   cout << "Pay Rate : " << payRate << endl;
   cout << "Hours Worked : " << hoursWorked << endl;
   cout << "Salary : " << calculateSalary() << endl;
}

partTimeEmployee::~partTimeEmployee()
{
    //dtor
}
