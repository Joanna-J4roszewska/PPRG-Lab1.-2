#include <iostream>
int main() {
	//A)
	int liczba;
	std::cout << "Podaj liczbe od 1 do 12: ";
	std::cin >> liczba;
	if (liczba >= 1 && liczba <= 12) { //sprawdzamy przedzial by wartosci sie zgadzaly
		std::cout << "Podana liczba to " << liczba << std::endl;
	}//B)
	else {
		std::cout << "Liczba spoza przedzialu." << std::endl;
		return 1; //1 bo program sie zamknie, 0 to oznacza prawidlowy przebieg programu
	}
	//C) D) E)
	if (liczba == 1) {
		std::cout << "Jest to miesiac Styczen." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 31 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest pochmurna." << std::endl;
	}
	if (liczba == 2) {
		std::cout << "Jest to miesiac Luty." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 28 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest pochmurna." << std::endl;
	}
	if (liczba == 3) {
		std::cout << "Jest to miesiac Marzec." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 31 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest pochmurna." << std::endl;
	}
	if (liczba == 4) {
		std::cout << "Jest to miesiac Kwiecien." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 30 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest pogodna, sloneczna." << std::endl;
	}
	if (liczba == 5) {
		std::cout << "Jest to miesiac Maj." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 31 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest pogodna, sloneczna." << std::endl;
	}
	if (liczba == 6) {
		std::cout << "Jest to miesiac Czerwiec." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 30 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest sloneczna." << std::endl;
	}
	if (liczba ==7) {
		std::cout << "Jest to miesiac Lipiec." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 31 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest sloneczna." << std::endl;
	}
	if (liczba == 8) {
		std::cout << "Jest to miesiac Sierpien." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 31 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest sloneczna." << std::endl;
	}
	if (liczba == 9) {
		std::cout << "Jest to miesiac Wrzesien." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 30 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest sloneczna." << std::endl;
	}
	if (liczba == 10) {
		std::cout << "Jest to miesiac Pazdziernik." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 31 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest pochmurna." << std::endl;
	}
	if (liczba == 11) {
		std::cout << "Jest to miesiac Listopad." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 30 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest pochmurna, zimna." << std::endl;
	}
	if (liczba == 12) {
		std::cout << "Jest to miesiac Grudzien." << std::endl;
		std::cout << "Dany miesiac w roku nieprzestepnym ma 31 dni." << std::endl;
		std::cout << "W tym okresie rocznym pogoda jest pochmurna, zimna." << std::endl;


	}
	return 0;
}
