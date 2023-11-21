#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

using namespace std;

char wola;

void dziesiatka()
{
    cout<<"Ojcze nasz..."<<endl;
    chrono::seconds duration(3);
    this_thread::sleep_for(duration);

    for(int i=1; i<11; i++)
    {
        cout<<"Zdrowaś Maryjo..."<<endl;
        chrono::seconds duration(2);
        this_thread::sleep_for(duration);
    }

    cout<<"Chwała Ojcu..."<<endl;
}

void radosne()
{
    cout<<"I. Zwiastowanie Maryi"<<endl;
    dziesiatka();
    cout<<"II. Nawiedzenie św Elżbiety"<<endl;
    dziesiatka();
    cout<<"III. Narodzenie Pana Jezusa"<<endl;
    dziesiatka();
    cout<<"IV. Ofiarowanie Pana Jezusa"<<endl;
    dziesiatka();
    cout<<"V. Odnalezienie Pana Jezusa"<<endl;
    dziesiatka();
}

void swiatla()
{
    cout<<"I. Chrzesta Pana Jezusa"<<endl;
    dziesiatka();
    cout<<"II. Objawienie w Kanie Galilejskiej"<<endl;
    dziesiatka();
    cout<<"III. Głoszenie Ewangelii"<<endl;
    dziesiatka();
    cout<<"IV. Przemienienie na górze Tabor"<<endl;
    dziesiatka();
    cout<<"V. Ustanowienie Eucharystii"<<endl;
    dziesiatka();
}

void bolesne()
{
    cout<<"I. Modlitwa Pana Jezusa w Ogrójcu"<<endl;
    dziesiatka();
    cout<<"II. Biczowanie Pana Jezusa"<<endl;
    dziesiatka();
    cout<<"III. Cierniem ukoronowanie Pana Jezusa"<<endl;
    dziesiatka();
    cout<<"IV. Droga Krzyżowa Pana Jezusa"<<endl;
    dziesiatka();
    cout<<"V. Ukrzyżowanie Pana Jezusa"<<endl;
    dziesiatka();
}

void chwalebne()
{
    cout<<"I. Zmartwychwstanie Pana Jezusa"<<endl;
    dziesiatka();
    cout<<"II. Wniebowstąpienie Pana Jezusa"<<endl;
    dziesiatka();
    cout<<"III. Zesłanie Ducha Świętego"<<endl;
    dziesiatka();
    cout<<"IV. Wniebowzięcie Maryi"<<endl;
    dziesiatka();
    cout<<"V. Ukoronowanie Maryi na Królową Nieba i Ziemii"<<endl;
    dziesiatka();
}

int main()
{
    while(true)
    {
    cout<<"++++++++++++++++++++++++++"<<endl;
    cout<<"Tajemnice Różańca Świętego"<<endl;
    cout<<"++++++++++++++++++++++++++"<<endl;
    cout<<"1. Tajemnice Radosne"<<endl;
    cout<<"2. Tajemnice Światła"<<endl;
    cout<<"3. Tajemnice Bolesne"<<endl;
    cout<<"4. Tajemnice Chwalebne"<<endl;
    cout<<"5. Zakończ pacierz"<<endl;
    cout<<"++++++++++++++++++++++++++"<<endl;
    cout<<"Twoja wola: ";
    cin>>wola;
    system("clear");

    switch(wola)
    {
        case '1':
            radosne();
        break;

        case '2':
            swiatla();
        break;

        case '3':
            bolesne();
        break;

        case '4':
            chwalebne();
        break;

        case '5':
            exit(0);
        break;

        default:
            cout<<"Nie ma takiej opcji w menu!"<<endl;
        break;
    }}

    return 0;
}
