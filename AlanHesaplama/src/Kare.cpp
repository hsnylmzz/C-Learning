#include "Kare.h"

Kare::Kare()
{
    taban = 0;
    yukseklik = 0;
}
Kare::Kare(double t,double y)
{
    taban = t;
    yukseklik = y;
}
Kare::~Kare()
{
    //dtor
}
double Kare::Alan()
{
  return taban*yukseklik;
}
