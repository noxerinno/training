#include <iostream>
#include "Vehicule.h"
#include "Moto.h"

using namespace std;

void type(Vehicule const& a)
{
    a.afficher();
}

int main()
{
    Vehicule v;
    Moto petoux;

    type(v);
    type(petoux);

    return 0;
}
