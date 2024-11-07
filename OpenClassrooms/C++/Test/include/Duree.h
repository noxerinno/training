#ifndef DUREE_H
#define DUREE_H

#include <iostream>

class Duree
{
    public:
        Duree();
        Duree(int h);
        Duree(int h, int m);
        Duree(int h, int m, int s);
        Duree(int h, int m, int s, int j);
        virtual ~Duree();
        void afficheur();
        void afficheur(std::ostream &flux) const;
        void formater();
        void addition(Duree temps1, Duree temps2);
        void soustraction(Duree temps1, Duree temps2);
        //void convertisseur_m_heure(int m_heure, int m_minute, int m_secondes);
        bool estEgal(Duree const& b) const;
        bool estInferieur(Duree const& b) const;
        Duree& operator+=(Duree const& a);

    protected:

    private:
        int m_heure;
        int m_minute;
        int m_seconde;
        int m_jours;
};

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);
bool operator<=(Duree const& a, Duree const& b);
bool operator>(Duree const& a, Duree const& b);
bool operator>=(Duree const& a, Duree const& b);

std::ostream & operator<<(std::ostream &flux, Duree const& duree);

#endif // DUREE_Hs
