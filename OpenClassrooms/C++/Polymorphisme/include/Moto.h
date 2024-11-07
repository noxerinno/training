#ifndef MOTO_H
#define MOTO_H

#include <Vehicule.h>


class Moto : public Vehicule
{
    public:
        Moto();
        virtual ~Moto();
        virtual void afficher() const;

    protected:

    private:
};

#endif // MOTO_H
