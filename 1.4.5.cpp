#include <iostream>

using namespace std;

int main()
{
    int n;
    int suma = 0;
    cout << "Podaj n:" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        int kwadrat;
        kwadrat = i * i;
        suma += kwadrat;
    }
    cout << "Suma kwadratow n liczb wynosi:" << suma;
    return 0;
}
