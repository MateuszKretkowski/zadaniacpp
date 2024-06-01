#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int dzien;
	cout << "wybierz swoj dzien: " << endl;
	cin >> dzien;
	unordered_map < int, string > hashmap;
	hashmap.insert({1, "poniedzialek"});
	hashmap.insert({2, "wtorek"});
	hashmap.insert({3, "sroda"});
	hashmap.insert({4, "czwartek"});
	hashmap.insert({5, "piatek"});
	hashmap.insert({6, "sobota"});
	hashmap.insert({7, "niedziela"});
	cout << "oto twoj dzien" << hashmap[dzien] << endl;
}
