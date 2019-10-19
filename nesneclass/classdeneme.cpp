#include <iostream>
using namespace std;

class Dikdortgen{
  public:
  double uzunluk;
  double genislik;
  double getSquare(void);
  void setLength(double);
  void setBreadth(double);
};
double Dikdortgen::getSquare()
{
  return uzunluk * genislik;
}
void Dikdortgen::setLength(double len)
{
  uzunluk = len;
}
void Dikdortgen::setBreadth(double bre)
{
  genislik = bre;
}
int main() {
  Dikdortgen Cisim;
  double alan = 0.0;
  Cisim.setLength(3.12);
  Cisim.setBreadth(4.54);
  alan = Cisim.getSquare();
  cout << "Cismin Alanı : " << alan << endl;

}