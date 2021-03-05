#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b, wybor, wynik;
    wybor = 0;
    wynik = 0;
    cout << "Podaj dwie liczby:";
    cin >> a >> b;

    cout << "Dodawanie[1]" << endl << "Odejmowanie[2]" << endl << "Mnozenie[3]" << endl << "Dzielenie[4]" << endl << "Wybierz co chcesz zrobic;" << endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1: {
        wynik = a + b;
        cout << "Wynik: " << wynik << endl;
        break;
    }
    case 2: {
        wynik = a - b;
        cout << "Wynik: " << wynik << endl;
        break;
    }
    case 3: {
        wynik = a * b;
        cout << "Wynik: " << wynik << endl;
        break;
    }

    case 4: {
        wynik = a / b;
        cout << "Wynik: " << wynik << endl;
        break;
    }
    default:
        cout << "Blad - nieprawidlowe polecenie." << endl;
    }
    return 0;
}
