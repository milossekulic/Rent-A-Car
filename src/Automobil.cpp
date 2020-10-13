    #include "Automobil.h"


Automobil::Automobil(string nazivVozila, string markaVozila, int cenaIzdavanja, int maxBrzina) :Vozilo(nazivVozila, markaVozila, cenaIzdavanja) {
	this->maxBrzina = maxBrzina;
}

int Automobil::getMaxBrzina() { return this->maxBrzina; }
void Automobil::setMaxBrzina(int max) { this->maxBrzina = max; }

void Automobil::DaLiJeAutomobilSportski() {

	if (this->maxBrzina > 230) {

		cout << "automobil je sportski";
	}
	else {
		cout << "automobil nije sportski";

	}
}

