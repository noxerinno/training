#include "Moto.h"
#include <iostream>

using namespace std;

Moto::Moto()
{
    //ctor
}

Moto::~Moto()
{
    //dtor
}

void Moto::afficher() const
{
    cout << "Je suis une moto." << endl;
}
