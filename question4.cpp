#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Wybierz Liczbe: ";
	cin >> n;
	int temp = 0;
	for (int i=0; i<=n; i++) {
		if (i % 2 == 0) {
			temp+=i;
		}
		else {
			temp-=i;
		}
	} 	
	cout << "Oto liczba: " << temp << endl;
	return 0;
}
