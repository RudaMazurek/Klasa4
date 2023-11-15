#include <iostream>
using namespace std;

int main() {

    int n;
    int k = 2;
    cout << "Podaj liczbe: ";
    cin >> n;
    while (n > 1)
    {
        while (n % k == 0) {
            cout << k << " ";
            n = n / k;
        }
        k++;
    }
}