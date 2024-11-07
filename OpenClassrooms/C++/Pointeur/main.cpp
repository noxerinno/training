#include <iostream>

using namespace std;

int main()
{
    /*int a, *p= new int;

    cout << "Entrer la valeur de a : ";
    cin >> a;

    p = &a;

    cout << "\n\n" << p << endl;
    cout << *p << endl;

    *p = 21;

    cout << *p << endl;*/

    int ***t = new int** [20], l(0);

    for(int i(0); i<20; i++)
    {
        t[i] = new int* [20];
        for(int j(0); j<20; j++)
        {
            t[i][j] = new int [20];
        }

    }

    for(int i(0); i<20; i++)
    {
        for(int j(0); j<20; j++)
        {
            for(int k(0); k<20; k++)
            {

                t[i][j][k]=l;
                cout << t[i][j][k] << endl;
                l++;
            }
        }
    }

    return 0;
}
