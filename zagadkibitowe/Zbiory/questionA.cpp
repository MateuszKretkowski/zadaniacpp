#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <algorithm>
#include "checking_thru_list.h"
using namespace std;

int main() {
        int n;
        cout << "wybierz liczbe n: ";
        cin >> n;
        checking_thru_list(n);
        return 0;
}
