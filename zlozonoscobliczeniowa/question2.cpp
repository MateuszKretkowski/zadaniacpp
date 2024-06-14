#include <iostream>

using namespace std;

int main() {
        int n;
        cout << "wpisz liczbe n > 0: ";
        cin >> n;
        int tab[2*n];
        int input;
        cin >> input;
        int max = input;
        int min = input;
        int counter=0;
        for (int i=0; i<2*n; i++) {
                cin >> input;
                tab[i] = input;
        }
        if (tab[0] < tab[1]) {
               min = tab[0];
               max = tab[1];
        }
        else {
                min = tab[1];
                max = tab[0];
        }
        for (int i=2; i<2*n; i++) {
                if (tab[i] < min) {
                        min = tab[i];
                }
                if (tab[i] > max) {
                        max = tab[i]
                }
        }
        cout << "min: " << min << endl;
        cout << "max: " << max << endl;
        cout << "Counter: " << counter << endl;

        return 0;
}
