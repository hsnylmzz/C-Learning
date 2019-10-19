#include <iostream>
#include <math.h>
using namespace std;

class Ucgen{
  public:
    double getSquare(void);
    double getPerimeter(void);
    double kenar1;
    double kenar2;
    double kenar3;
};
double Ucgen::getSquare()
{
  double u = (kenar1 + kenar2 + kenar3)/2;
  return sqrt(u*(u-kenar1)*(u-kenar2)*(u-kenar3));
}
double Ucgen::getPerimeter()
{
  return kenar1 + kenar2 + kenar3;
}
int main() {
   Ucgen ucgen;
   ucgen.kenar1 = 3.2;
   ucgen.kenar2 = 4.1;
   ucgen.kenar3 = 5.5;
   double result1 = ucgen.getSquare();
   double result2 = ucgen.getPerimeter();
   cout << "Üçgenin Alanı : " << result1 << endl;
   cout << "Üçgenin Çevresi : " << result2 << endl;
}