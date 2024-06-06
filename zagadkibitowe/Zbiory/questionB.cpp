#include <iostream>
#include "checking_thru_list.h"
using namespace std;

int main() {
        int n;
        int m;
        cout << "wpisz liczbe n: ";
        cin >> n;
        cout << "wpisz liczbe m: ";
        cin >> m;
        int liczba = n + m;
        checking_thru_list(liczba);
        return 0;
}
