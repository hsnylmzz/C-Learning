#ifndef CARRAY_H
#define CARRAY_H
#include "cNumber.h"

class cArray
{
    public:
        cArray(int n = 10);
        const cArray& operator=(const cArray&);
        virtual ~cArray();

    protected:

    private:
        cNumber *cArr;
        int arrayItems;
};

#endif // CARRAY_H
