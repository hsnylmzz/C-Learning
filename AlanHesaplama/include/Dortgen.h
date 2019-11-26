#ifndef DORTGEN_H
#define DORTGEN_H


class Dortgen
{
    public:
        Dortgen();
        virtual ~Dortgen();

        double Gettaban() { return taban; }
        void Settaban(double val) { taban = val; }
        double Getyukseklik() { return yukseklik; }
        void Setyukseklik(double val) { yukseklik = val; }
        virtual double Alan();

    protected:
        double taban;
        double yukseklik;

    private:
};

#endif // DORTGEN_H
