#include <iostream>
using namespace std;

class Araba{
   public:
     void setMarka(string m);
     string getMarka();
     void setModel(string md);
     string getModel();
     void setUcret(int u);
     int getUcret();
     void arabaSat();
   private:
     string marka;
     string model;
     int ucret;
};
void Araba::setMarka(string m)
{
  marka = m;
}
string Araba::getMarka()
{
  return marka;
}
void Araba::setModel(string md)
{
  model = md;
}
string Araba::getModel()
{
  return model;
}
void Araba::setUcret(int u)
{
  ucret = u;
}
int Araba::getUcret()
{
  return ucret;
}
void Araba::arabaSat()
{
   cout << "Markası : " << marka << endl;
   cout << "Modeli : " << model << endl;
   cout << "Ücreti : " << ucret << " TL" << endl;
}
int main() {
  Araba araba;
  araba.setMarka("Opel");
  araba.setModel("Astra");
  araba.setUcret(100000);
  araba.arabaSat();
}