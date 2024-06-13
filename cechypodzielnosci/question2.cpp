#include <iostream>

using namespace std;

int main() {
        int n;
        cout << "Podaj liczbe N mniejsza od 10^200: ";
        cin >> n;
        if (n%6==0) {
                cout << "liczba jest podzielna przez 6" << endl;
        }
        else {
                cout << "Liczba nie jest podzielna przez 6" << endl;
        }
        return 0;
}
