#include <iostream>

int main() {
	int x;
	int y;
	std::cout << "podaj pierwsza liczbe: ";
	std::cin >> x;
	std::cout << "podaj druga liczbe: ";
	std::cin >> y;
	int temp;
	if (x == 0 || y == 0) {
		std::cout << "nie mozna dzielic przez zero" << std::endl;
		return 0;
	}
	for (int i=1; i <= x && i <= y; i++) {
		if (x % i == 0 && y % i == 0) {
			temp = i;
		}
	}
	std::cout << "NWD: " << temp << std::endl;	
	return 0;
}
