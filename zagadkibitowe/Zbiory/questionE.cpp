#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
        int n, m;
        cout << "podaj liczbe n, a nastepnie podaj liczbe m listy myList: ";
        cin >> n >> m;
        list<int> myList;
            list<int> listForViewing;
            list<int> newList;
            int temp = n;
            int bit = 1;
            int index = 0;
            for (int o=0; o <= 8; o++) {
                listForViewing.push_back(o);
                myList.push_back(o);
            }
            auto i = listForViewing.begin();
            while (i != listForViewing.end() && temp > 0) {
                    cout << "temp: " << temp << endl; 

                    if (temp & bit) {
                            ++i;
                            index = index+1;
                            cout << "jest liczba 1" << endl;
                            i = listForViewing.erase(i);
                    }
                    else {
                    index = index+1;
                    cout << "jest liczba 0" << endl;
                    }
                    temp = temp >> 1;
                    index++;
            }
            std::set_difference(myList.begin(), myList.end(), listForViewing.begin(), listForViewing.end(),
                    std::inserter(newList, newList.begin()));
            cout << "oto lista: " << endl;
            for (int j : newList) {
                    cout << j << endl;
            }
  
}
