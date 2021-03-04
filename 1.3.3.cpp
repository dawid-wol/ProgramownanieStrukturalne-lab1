#include <iostream>

using namespace std;

int main()
{
int a,b,c,x;

cout << "podaj trzy liczby calkowite" << endl;

cin>> a >> b >> c;

if(a > b && a > c)
{
    x = a;
}
else
{
    if (b > c)
    {
        x = b;
    }
    else
    {
        x = c;
    }
}


cout << "najwieksza liczba:" << x << endl;

return 0;
}
