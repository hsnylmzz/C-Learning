#include <iostream>
using namespace std;
class Dikdortgen{
  public:
    double getSquare(void);
    int uzunluk;
    int genislik;
};
double Dikdortgen::getSquare()
{
  return uzunluk * genislik;
}
int main() {
  Dikdortgen cisim;
  cisim.uzunluk = 3;
  cisim.genislik = 4;
  cout << "Dikdörtgenin Alanı : " << cisim.getSquare() << endl;
}