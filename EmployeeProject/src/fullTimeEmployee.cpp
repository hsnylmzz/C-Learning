#include "fullTimeEmployee.h"

fullTimeEmployee::fullTimeEmployee()
{
    //ctor
}


fullTimeEmployee::fullTimeEmployee(string nameIn, string surnameIn, unsigned int salaryIn)
:personType(nameIn,surnameIn){
   salary = salaryIn;
}

void fullTimeEmployee::print(){
   personType::print();
   cout << "Salary : " << salary << endl;
}

fullTimeEmployee::~fullTimeEmployee()
{
    //dtor
}
