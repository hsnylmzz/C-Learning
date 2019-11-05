#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include <personType.h>


class fullTimeEmployee : public personType
{
    public:
        fullTimeEmployee();
        fullTimeEmployee(string nameIn, string surnameIn, unsigned int salaryIn);
        void print();
        virtual ~fullTimeEmployee();

        unsigned int Getsalary() { return salary; }
        void Setsalary(unsigned int val) { salary = val; }

    protected:

    private:
        unsigned int salary;
};

#endif // FULLTIMEEMPLOYEE_H
