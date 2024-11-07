#include <iostream>
#include "Duree.h"
#include <math.h>

using namespace std;

Duree::Duree()
{
    m_heure = m_minute = m_seconde = m_jours =  0;
    Duree::formater();
}

Duree::Duree(int h)
{
    m_minute = m_seconde = m_jours = 0;
    m_heure = h;
    Duree::formater();
}

Duree::Duree(int h, int m)
{
    m_seconde = m_jours = 0;
    m_heure = h;
    m_minute = m;
    Duree::formater();
}

Duree::Duree(int h, int m, int s)
{
    m_jours = 0;
    m_heure = h;
    m_minute = m;
    m_seconde = s;
    Duree::formater();
}

Duree::Duree(int j, int h, int m, int s)
{
    m_heure = h;
    m_seconde = s;
    m_minute = m;
    m_jours = j;
    Duree::formater();
}

Duree::~Duree()
{
    //dtor
}

void Duree::afficheur()
{
    cout << m_jours << "j " << m_heure << "h " << m_minute << "m et " << m_seconde << "s";
}

void Duree::afficheur(ostream &flux) const
{
    cout << m_jours << "j " << m_heure << "h " << m_minute << "m et " << m_seconde << "s";
}

void Duree::formater()
{
    while(m_seconde>59)
    {
        m_seconde -= 59;
        m_minute++;
    }

    while(m_seconde<0)
    {
        m_seconde += 59;
        m_minute--;
    }

    while(m_minute>59)
    {
        m_minute -= 59;
        m_heure++;
    }

    while(m_minute<0)
    {
        m_minute += 59;
        m_heure--;
    }

    while(m_heure>23)
    {
        m_heure -= 23;
        m_jours++;
    }

    while(m_heure<0)
    {
        m_heure += 23;
        m_jours--;
    }
}

void Duree::addition(Duree temps1, Duree temps2)
{
    m_jours = temps1.m_jours + temps2.m_jours;
    m_heure = temps1.m_heure + temps2.m_heure;
    m_minute = temps1.m_minute + temps2.m_minute;
    m_seconde = temps1.m_seconde + temps2.m_seconde;
}

void Duree::soustraction(Duree temps1, Duree temps2)
{
    m_jours = temps1.m_jours - temps2.m_jours;
    m_heure = temps1.m_heure - temps2.m_heure;
    m_minute = temps1.m_minute - temps2.m_minute;
    m_seconde = temps1.m_seconde - temps2.m_seconde;
}

Duree& Duree::operator+=(Duree const& a)
{
    m_seconde += a.m_seconde;
    m_minute += a.m_minute;
    m_heure += a.m_heure;

    return *this;
}

bool Duree::estEgal(Duree const& b) const
{
    return(m_heure == b.m_heure && m_minute == b.m_minute && m_seconde == b.m_seconde);
}

bool Duree::estInferieur(Duree const& b) const
{
    if(m_heure < b.m_heure)
        return true;
    if(m_heure == b.m_heure && m_minute < b.m_minute)
        return true;
    if(m_heure == b.m_heure && m_minute == b.m_minute && m_seconde < b.m_seconde)
        return true;
    else
        return false;
}

bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}

bool operator!=(Duree const& a, Duree const& b)
{
    return !(a==b);
}

bool operator<(Duree const& a, Duree const& b)
{
    return a.estInferieur(b);
}

bool operator<=(Duree const& a, Duree const& b)
{
    if(a==b)
        return true;
    else
        return(a<b);
}

bool operator>(Duree const& a, Duree const& b)
{
    return !(a<=b);
}

bool operator>=(Duree const& a, Duree const& b)
{
    return !(a<b);
}

ostream &operator<<(ostream &flux, Duree const& duree)
{
    duree.afficheur(flux);
    return flux;
}
