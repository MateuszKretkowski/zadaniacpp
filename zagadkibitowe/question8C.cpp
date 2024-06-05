#include <iostream>
#include <iterator>
#include <list>
#include <vector>
using namespace std;

int main() {
        list<int> myList = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
        list<int> listForViewing = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
        int n;
        cout << "wybierz liczbe n: ";
        cin >> n;
        int temp = n;
        int bit = 1;
        int index = 0;
            auto i = listForViewing.begin();
    while (i != listForViewing.end() && temp > 0) {
        if (temp & bit) {
            ++i;
            index = index+1;
            cout << "jest liczba 1" << endl;
        } else {
            index = index+1;
            temp = temp >> 1;
            i = listForViewing.erase(i);
            cout << "jest liczba 0" << endl;
        }
        index++;
    }
        cout << "oto lista: " << endl;
        for (int j : listForViewing) {
                cout << j << endl;
        }
        return 0;
}
