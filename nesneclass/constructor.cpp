#include <iostream>
using namespace std;

class Dikdortgen{
  public:
    Dikdortgen(double,double);
    double alanHesapla(); 
    double en;
    double boy;
};
Dikdortgen::Dikdortgen(double e,double b)
{
  en = e;
  boy = b;
  cout << " Nesne oluştu " << endl;
}
double Dikdortgen::alanHesapla()
{
   return en * boy;
}
int main() {
  Dikdortgen d(3.14,9.00);
  double result = d.alanHesapla();
  cout << "Alanı : " << result << " br2'dir " << endl;
}