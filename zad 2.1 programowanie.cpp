#include <iostream>

int main() {
	int n;
	std::cout << "Podaj Wartosc n: ";
	std::cin >> n;
	
	int SumaCalkowita = 0;
	for (int i = 1; i <= n; ++i) {
		int SumaWiersza = 0;
		for (int j = 1; j <= i; ++j) {
			SumaWiersza += j;
		}
		SumaCalkowita += SumaWiersza;
	}
	std::cout << "Suma szeregu dla n = " << n << " wynosi " << SumaCalkowita << std::endl;
	return 0;
}
