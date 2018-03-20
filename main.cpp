#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
    Set Multime1, Multime2;
    int dim;
    cout << "Introduceti cardinalul multimii ";
    cin >> dim;
    cout<< "Introduceti elementele multimii: "<<endl;
    for(int i = 0; i < dim; i ++ )
        cin >> Multime1;
    Set Multime4(Multime1);
    cout << "Multimea 1 este : " << Multime4 << endl;
    Multime2.Insert(2);
    Multime2.Insert(1);
    Multime2.Insert(4);
    cout << "Multimea 2 este : " << Multime2 <<endl;
    Multime4 = Multime1.MultimePara();
    cout << "Elementele pare sunt: " << Multime4 << endl;
    Multime4 = Multime1.MultimeImpara();
    cout << "Elementele impare sunt: " << Multime4 << endl;
    if( Multime4 < Multime1 )
        cout << "Cardinalul este mai mic" << endl;
    else cout << "Cardinalul este mai mare" << endl;
    Multime4 = Multime1 + Multime2;
    cout << "Reuniunea este " << Multime4 << endl;
    Multime2.Delete(1);
    cout << "Stergerea elementului 1 din multimea 2: " << Multime2 << endl;
    if ( Multime2.Appears(2))
        cout << "Elementul  2 apare in: " << Multime2 << endl;
    else cout << "Elementul 2 nu apare in: " << Multime2 << endl;
    cout << "Suma elementelor din multimea 1 este: "<< Multime1.Sum() << endl;
    Multime4= 2* Multime1;
    cout << "Elementele inmultite cu scalar din multimea 1 sunt: " << Multime4 << endl;
    Multime2 = Multime1;
    cout<< "Acum Multimea 2 este egala cu multimea 1: " << Multime2 << endl;
    cout << Multime1.MultimePara() << endl;
}
