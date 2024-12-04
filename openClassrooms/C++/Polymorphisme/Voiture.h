#ifndef VOITURE_H_INCLUDED
#define VOITURE_H_INCLUDED

#include "Vehicule.h"

class Voiture : public Vehicule
{
    public :
        Voiture();
        virtual ~Voiture();
        void afficher();

    protected:

    public:
        int nbRoux;
};


#endif // VOITURE_H_INCLUDED
