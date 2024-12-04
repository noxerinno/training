#include "Vehicule.h"
#include <iostream>

using namespace std;

Vehicule::Vehicule()
{
    //ctor
}

Vehicule::~Vehicule()
{
    //dtor
}

void Vehicule::afficher() const
{
    cout << "Je suis un vehicule." << endl;
}
