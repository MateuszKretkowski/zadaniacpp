#include <iostream>

using namespace std;

int main() {
        int n;
        cout << "wpisz liczbe n > 0: ";
        cin >> n;
        int tab[2*n];
        int input;
        int max = input;
        int min = input;
        cout << "wpisz liczbe max, min: ";
        cin >> max, min;
        int counter=0;
        for (int i=0; i<2*n; i++) {
                cin >> input;
                counter+=2;

                if (input > max) {
                        max = input;
                }
                if (input < min) {
                        min = input;
                }
                tab[i] = input;
        }
        cout << "min: " << min << endl;
        cout << "max: " << max << endl;
        cout << "Counter: " << counter << endl;

        return 0;
}
