#include "cNumber.h"

cNumber::cNumber(double realIn, double imagIn)
{
    real = realIn;
    imag = imagIn;
    //ctor
}

const cNumber& cNumber::operator=(const cNumber &rightObject){

  if(this != &rightObject){

     real = rightObject.real;
     imag = rightObject.imag;
  }
 return *this;
}

cNumber::~cNumber()
{
    //dtor
}
