#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include <personType.h>


class partTimeEmployee : public personType
{
    public:
        partTimeEmployee();
        partTimeEmployee(string nameIn, string surnameIn, unsigned int payRateIn, unsigned int hoursWorkedIn);
        void print();
        virtual ~partTimeEmployee();

        unsigned int GetpayRate() { return payRate; }
        void SetpayRate(unsigned int val) { payRate = val; }
        unsigned int GethoursWorked() { return hoursWorked; }
        void SethoursWorked(unsigned int val) { hoursWorked = val; }
        unsigned int calculateSalary();

    protected:

    private:
        unsigned int payRate;
        unsigned int hoursWorked;
};

#endif // PARTTIMEEMPLOYEE_H
