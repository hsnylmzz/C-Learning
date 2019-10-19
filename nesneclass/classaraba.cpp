#include <iostream>
using namespace std;

class Araba{
  public:
    Araba(string,string,int);
    string marka;
    string model;
    int ucret;
};
Araba::Araba(string m,string md,int c)
{
  marka = m;
  model = md;
  ucret = c;
}

int main() {
  Araba araba("Opel","Astra",100000);
  cout << "Aracın Markası : " << araba.marka << endl;
  cout << "Modeli : " << araba.model << endl;
  cout << "Aracın Ücreti : " << araba.ucret << " TL " << endl;
}