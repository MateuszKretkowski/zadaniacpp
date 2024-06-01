#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "podaj a i b: ";
	cin >> a >> b;
	int x;
	int right = b/a;
	cout << "Oto rozwiazanie tego rownania: x = " << right << endl;
	return 0;
}
