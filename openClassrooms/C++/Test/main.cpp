#include <iostream>
#include "Duree.h"

using namespace std;

int main()
{
    int a, b, c;


    cout << "Entrer une heure, minute et seconde : ";
    cin >> a >> b >> c;
    Duree temps1(a, b, c);

    cout << "Entrer une heure, minute et seconde : ";
    cin >> a >> b >> c;
    Duree temps2(a, b, c);

    cout << "\n\n";

    cout << temps1 << " et " << temps2 << endl;

    /*temps1.afficheur();
    cout << "et" << endl;
    temps2.afficheur();

    temps1 += temps2;
    temps1.formater();

    cout << "donne" << endl;
    temps1.afficheur();

    Duree tempsTotal;

    tempsTotal.afficheur();
    tempsTotal.soustraction(temps2, temps1);
    tempsTotal.formater();
    tempsTotal.afficheur();*/



    return 0;
}
