#include <iostream>
using namespace std;

double funkcja(int x);

int main()
{
    int x;

    cout << "podaj numer miejsca liczby w ciagu: ";
    cin >> x;
    cout << endl << x << " wyraz ciagu ma wartosc: " << funkcja(x);

}

double funkcja(int x) {
    if (x == 1) {
        return 1;
    }
    if (x == 2) {
        return 0.5;
    }
    return funkcja(x - 1) * funkcja(x - 2);
}