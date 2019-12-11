#ifndef CNUMBER_H
#define CNUMBER_H
#include <iostream>
using namespace std;

class cNumber
{
    friend ostream& operator<<(ostream&, const cNumber&);
    friend istream& operator>>(istream&, cNumber&);
    friend bool operator==(const cNumber&, const cNumber&);
    public:
        cNumber(double=0, double=0);
        virtual ~cNumber();
        const cNumber& operator=(const cNumber&);
        double Getreal() { return real; }
        void Setreal(double val) { real = val; }
        double Getimag() { return imag; }
        void Setimag(double val) { imag = val; }

    protected:

    private:
        double real;
        double imag;
};

#endif // CNUMBER_H
