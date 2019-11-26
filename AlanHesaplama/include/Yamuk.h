#ifndef YAMUK_H
#define YAMUK_H

#include <Dortgen.h>


class Yamuk : public Dortgen
{
    public:
        Yamuk();
        Yamuk(double t,double y,double u);
        virtual ~Yamuk();

        double Getust() { return ust; }
        void Setust(double val) { ust = val; }

        virtual double Alan();
    protected:

    private:
        double ust;
};

#endif // YAMUK_H
