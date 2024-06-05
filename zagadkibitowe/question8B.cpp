#include <iostream>

using namespace std;

int main() {
        int n;
        int inputk;
        cout << "wpisz liczbe n: ";
        cin >> n;
        int temp = n;
        cout << "wpisz liczbe k do 32: ";
        cin >> inputk;
        int k = 32 - inputk;
        int szukanaliczba;
        int poczatek = 1;
        for (int i=0; i<=inputk; i++) {
                if (i==inputk) {
                        szukanaliczba = temp&poczatek;
                }
                temp = temp >> 1;
        }
        cout << "bit jest: " << szukanaliczba << endl;
        return 0;
}
