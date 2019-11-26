#include <iostream>
#include "Dortgen.h"
#include "Kare.h"
#include "Yamuk.h"
using namespace std;
double AlanHesapla(Dortgen &d)
{
   return d.Alan();
}
int main()
{
    Yamuk y(10,20,5);
    Kare k(10,20);
    cout << "Kare Alan : " << AlanHesapla(k) << endl;
    cout << "Yamuk Alan : " << AlanHesapla(y) << endl;

    return 0;
}
