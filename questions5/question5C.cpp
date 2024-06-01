#include <iostream>

using namespace std;

int main() {
	int rok;
	bool przestepny;
	cout << "podaj rok ktory cie interesuje";
      	cin >> rok;
	if (rok % 4 == 0) {
		przestepny = true;
	}
	else {
		przestepny = false;
	}
	if (rok % 100 == 0) {
		przestepny = false;
	}
	if (rok % 400 == 0) {
		przestepny = true;
	}
	cout << "Twoj rok jest: " << przestepny << endl;
	return 0;
};
