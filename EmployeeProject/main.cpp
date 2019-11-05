#include <iostream>
#include <partTimeEmployee.h>
#include <fullTimeEmployee.h>

using namespace std;

int main()
{

    fullTimeEmployee sedat("sedat", "gormus", 1000);
    partTimeEmployee ahmet("ahmet", "Alp", 10, 10);

    ahmet.print();
    cout << endl;
    sedat.print();

    return 0;
}
