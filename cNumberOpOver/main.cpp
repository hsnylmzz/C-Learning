#include <iostream>
#include "cNumber.h"
#include "cArray.h"

using namespace std;

ostream& operator<<(ostream& os, const cNumber& cN){
   os << "(" << cN.real << "," << cN.imag << "j)";
   return os;
}

istream& operator>>(istream& is, cNumber& cN){
   is >> cN.real >> cN.imag;
   return is;
}

bool operator==(const cNumber& cNLeft, const cNumber& cNRight){
    return (cNLeft.real == cNRight.real)&&(cNLeft.imag == cNRight.imag);
}

int main()
{
    cNumber c1;
    cNumber c2(3,4);
    cout << c1 << endl;
    cin >> c1;
    cout << c1 << endl;
    if(c1 == c2){
        cout << "Numbers are equal" << endl;
    } else {
        cout << "Numbers are not equal" << endl;
    }



    return 0;
}
