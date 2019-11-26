#include "Yamuk.h"

Yamuk::Yamuk()
{
   taban = 0;
   yukseklik = 0;
   ust = 0;
}
Yamuk::Yamuk(double t,double y,double u)
{
  taban = t;
  yukseklik = y;
  ust = u;
}
Yamuk::~Yamuk()
{
    //dtor
}
double Yamuk::Alan()
{
  return (taban+ust)*(yukseklik/2);
}
