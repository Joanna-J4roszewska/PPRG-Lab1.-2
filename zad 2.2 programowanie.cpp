#include <iostream>

int main() {
	int a, b;


	//A)
	std::cout << "Podaj liczby a i b.";
	std::cin >> a >> b;
	std::cout << "Podane liczby a = " << a << " , b = " << b << std::endl;

	//B)
	std::cout << "Wiersz gwiazdek o dlugosci a:" << std::endl;
	for (int i= 0; i < a; ++i) {
		std::cout << '*';
	}
	std::cout << std::endl;

	//C)
	std::cout << "Kolumna gwiazdek o dlugosci b:" << std::endl;
	for (int i = 0; i < b; ++i) {
		std::cout << '*' << std::endl;

	}
	std::cout << std::endl;

	//D)
	std::cout << "Prostokat o wymiarach a x b:" << std::endl;
	for (int i = 0; i<b; ++i) {
		for (int j = 0; j<a; ++j) {
			std::cout << '*';
		}
		std::cout << std::endl;
	}
	

	//E)
	std::cout << "Obwod prostokata o wymiarach a x b:" << std::endl;
	for (int i = 0; i < b; ++i) {
		for (int j = 0; j < a; ++j) {
			if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
				std::cout << '*';
			}
			else {
				std::cout << ' ';

			}
		}
		std::cout << std::endl;
	}

	//F)
	std::cout << "Trojkat prostokatny rownoramienny, lewy dolny rog" << std::endl;
	for (int i = 1; i <= a- 1;++i){
		for (int j = 1; j <= i;++j) {
			std::cout << '*';
		}
		std::cout << std::endl;
	}
	
	//G)
	std::cout << "Trojkat prostokatny rownoramienny, prawy gorny rog" << std::endl;
	for (int i = 0; i < a - 1; ++i) {
		for (int j = 0; j < i; ++j) {
			std::cout << ' '; //pierw spacja
		}
		for (int n = 0; n < a - 1 - i; ++n) { // gwiazdki pisane po spacji, a-1-i sprawia ze w pierwszym wierszu bedzie najwiecej gwiazedk i w dol beda malec do jednej
			std::cout << '*';
		}
		std::cout << std::endl;
	}


}
