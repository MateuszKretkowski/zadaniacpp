#include <iostream>

using namespace std;

int main() {
	int iter=10;
	while (iter > 0) {
		for (int i=iter; i>=0; i--) {
			cout << ".";
		}
		int rest = 10 - iter;
		while (rest >= 0) {
			cout << "x";
			rest -= 1;
		}
		for (int i=iter; i>=0; i--) {
			cout << ".";
			if (i == 0) {
				cout << "." << endl;
			}	
		}
		iter -= 1;
	}
}
