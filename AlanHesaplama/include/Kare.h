#ifndef KARE_H
#define KARE_H

#include <Dortgen.h>


class Kare : public Dortgen
{
    public:
        Kare();
        Kare(double t,double y);
        virtual ~Kare();
        virtual double Alan();
    protected:

    private:
};

#endif // KARE_H
