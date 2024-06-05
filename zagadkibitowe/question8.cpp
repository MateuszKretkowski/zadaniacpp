#include <iostream>

using namespace std;

int main() {
        int liczba;
        cout << "wybierz liczbe: ";
        cin >> liczba;
        int poczatek = 1;
        int counter = 0;
        int temp = liczba;
        while (temp > 0 ) {
                if (temp&poczatek) {
                        counter = counter+1;    
                }
                temp = temp >> 1;
        }
        cout << "liczba 1 w binarnym liczby: " << counter;
        return 0;
}
