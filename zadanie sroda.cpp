#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

struct gra_komputerowa{
    string tytul;
    string gatunek;
    int ocena;
};


int main(){

    gra_komputerowa jeden;
        cout<<"podaj tutu�: ";
        cin>>jeden.tytul;
        cout<<"podaj gatunek: ";
        cin>>jeden.gatunek;
        cout<<"wpisz ocen�: ";
        cin>>jeden.ocena;

        cout<<jeden.tytul<<endl;
        cout<<jeden.gatunek<<endl;
        cout<<jeden.ocena<<endl;


    gra_komputerowa dwa;
        cout<<"podaj tutu�: ";
        cin>>dwa.tytul;
        cout<<"podaj gatunek: ";
        cin>>dwa.gatunek;
        cout<<"wpisz ocen�: ";
        cin>>dwa.ocena;

        cout<<dwa.tytul<<endl;
        cout<<dwa.gatunek<<endl;
        cout<<dwa.ocena<<endl;

    return 0;

}

