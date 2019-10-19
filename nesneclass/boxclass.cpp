#include <iostream>
using namespace std;
class Box{
  public:
    double length;
    double height;
    double breadth;
    string name;

    double getVolume(void);
    void printVolume();
    void setLength( double len );
    void setBreadth( double bre );
    void setHeight( double hei );
    void setName(string nm);

};
double Box::getVolume(){
  return length * height * breadth;
}
void Box::setLength(double len)
{
  length = len;
}
void Box::setBreadth(double bre)
{
  breadth = bre;
}
void Box::setHeight(double hei)
{
  height = hei;
}
void Box::setName(std::string nm)
{
  name = nm;
}
void Box::printVolume()
{
  double volume = getVolume();
  cout << "Hacmi : " << volume << endl;
}
int main() {
  Box Box1;
  Box Box2;
   double volume = 0.0;     // 
 
   // box 1 özellikleri
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
   Box1.setName("Box1");

   // box 2 özellikleri
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
   Box2.setName("Box2");

   // volume of box 1
   volume = Box1.getVolume();
   Box1.printVolume();

   // volume of box 2
   volume = Box2.getVolume();
   Box2.printVolume();
   return 0;
  
}