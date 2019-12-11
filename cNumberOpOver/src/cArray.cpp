#include "cArray.h"

cArray::cArray(int aItems)
{
    arrayItems = aItems;
    cArr = new cNumber[arrayItems];
    //ctor
}

const cArray& cArray::operator=(const cArray& rightObject){

   if(this != &rightObject){
      for(int i = 0; i < arrayItems; i++ )
      {
          cArr[i] =  rightObject.cArr[i];
      }
   }
   return *this;
}
cArray::~cArray()
{
    //dtor
}
