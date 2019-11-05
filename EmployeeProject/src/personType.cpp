#include "personType.h"

personType::personType()
{
    //ctor
}

personType::personType(string nameIn, string surnameIn){
   name = nameIn;
   surname = surnameIn;
}

void personType::print(){
   cout << "Name : " << name << endl;
   cout << "Surname : " << surname << endl;
}

personType::~personType()
{
    //dtor
}
