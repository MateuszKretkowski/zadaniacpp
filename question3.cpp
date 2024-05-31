#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "wpisz liczbe: " << endl;
	cin >> n;
	int temp = 0;
	for (int i=1; i <= n; i++) {
		if (n % i == 0) {
			temp = temp+i;
		}
	}
	cout << "Oto suma liczb: " << temp << endl;
	return 0;
}
