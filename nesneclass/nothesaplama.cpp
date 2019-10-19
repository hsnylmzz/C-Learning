#include <iostream>
using namespace std;

class Ogrenci
{
   public:
    void setVizeNotuGir(double);
    void setFinalNotuGir(double);
    void setOrtalama(double);
    void setHarfNotu(string);
    double getVizeNotuGir();
    double getFinalNotuGir();
    double getOrtalama();
    string getHarfNotu();
    double ortalamaHesapla();
    string harfNotu();
   private:
    double vize_notu;
    double final_notu;
    double ortalama;
    string harf_notu;
    bool ortalamahesaplandi;
};
void Ogrenci::setVizeNotuGir(double v)
{
  vize_notu = v;
}
void Ogrenci::setFinalNotuGir(double f)
{
  final_notu = f;
}
void Ogrenci::setOrtalama(double ort)
{
  ortalama = ort;
}
void Ogrenci::setHarfNotu(string h)
{
  harf_notu = h;
}
double Ogrenci::getVizeNotuGir()
{
  return vize_notu;
}
double Ogrenci::getFinalNotuGir()
{
  return final_notu;
}
double Ogrenci::getOrtalama()
{
  return ortalama;
}
string Ogrenci::getHarfNotu()
{
  return harf_notu;
}
double Ogrenci::ortalamaHesapla()
{
  ortalamahesaplandi = true;
  ortalama = 0.5*vize_notu + 0.5*final_notu;
  return ortalama;
}
string Ogrenci::harfNotu()
{
  if(!ortalamahesaplandi) harf_notu = "E";
  if(ortalama<40) harf_notu="FF";
  else if(ortalama<45) harf_notu="DC";
  else if(ortalama<55) harf_notu="CC";
  else if(ortalama<65) harf_notu="CB";
  else if(ortalama<75) harf_notu="BB";
  else if(ortalama<85) harf_notu="BA";
  else if(ortalama<=100) harf_notu="AA";
  else harf_notu="E";
  return harf_notu;
}
int main() {
  Ogrenci ogr;
  ogr.setVizeNotuGir(45.0);
  ogr.setFinalNotuGir(65.0);
  double ort = ogr.ortalamaHesapla();
  string harfli_not = ogr.harfNotu();

  cout << "Ortalaması : " << ort << endl;
  cout << "Harfli Notu : " << harfli_not << endl;
}