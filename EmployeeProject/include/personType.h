#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <iostream>
#include <string>

using namespace std;


class personType
{
    public:
        personType();
        personType(string nameIn, string surnameIn);
        void print();
        virtual ~personType();

    protected:
        string name, surname;

    private:
};

#endif // PERSONTYPE_H
