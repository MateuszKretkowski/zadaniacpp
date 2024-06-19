#include <iostream>

using namespace std;

int main() {
        int liczba = 24124;
        int * wsk_liczba;
        wsk_liczba = & liczba;
        * wsk_liczba = * wsk_liczba + 1;
        cout <<& liczba << endl << endl;
        cout << "wsk_lizcba: " << * wsk_liczba << endl;
        return 0;
}
