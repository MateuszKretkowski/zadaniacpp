#include <iostream>
#include <list>
#include <map>

using namespace std;

int main() {
    int n;
    cout << "Podaj liczbę n: ";
    cin >> n;

    list<int> myList;
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbę: ";
        int x;
        cin >> x;
        myList.push_back(x);
    }

    for (int i : myList) {
        cout << "* " << i << " *";
    }

    float temp;
    if (n%2!=0) {
        temp = n/2+1;
        cout << "Mediana: " << temp << endl; 
    }
    else {
        temp = ((n/2)+(n/2+1))/2;
        cout << "Mediana parzysta: " << temp << endl;
    }

    map<int, int> hashmap;
    for (int i : myList) {
        auto it = hashmap.find(i);
        if (it != hashmap.end()) {
            hashmap[i]++;
        } else {
            hashmap[i] = 1;
        }
    }

    for (const auto& pair : hashmap) {
        list<int> counter;
        counter.push_back(pair.second);

        cout << "Key: " << pair.first << endl;
        cout << "Value: ";
        for (int count : counter) {
            cout << " " << count << " ";
        }
        cout << endl;
    }

    return 0;
}

