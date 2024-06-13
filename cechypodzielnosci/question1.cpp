#include <iostream>

using namespace std;

int main() {
        int n;
        cout << "Podaj liczbe mniejsza od 10^200: ";
        cin >> n;
        if (n%4==0 && n%5==0) {
                cout << "Liczba jest podzielna przez obie liczby 4 i 5" << endl;
        }
        else {
                cout << "Liczba nie jest podzielna przez obie liczby 4 i 5." << endl;
        }
}
