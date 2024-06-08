#include <iostream>
#include "checking_thru_list.cpp"
using namespace std;

int main() {
        int a,b;
        cout << "podaj liczbe  a, b: ";
        cin >> a >> b;
        int liczba = a-b;
        checking_thru_list(liczba);
        return 0;
}
