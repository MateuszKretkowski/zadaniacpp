 #include <iostream>
#include <list>
#include <algorithm>
#include "checking_thru_list.h"
using namespace std;

        void checking_thru_list(int n) {
            list<int> myList = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
            list<int> listForViewing = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
            list<int> newList;
            int temp = n;
            int bit = 1;
            int index = 0;
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

