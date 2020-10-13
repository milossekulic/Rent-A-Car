    #include "Vozilo.h"


Vozilo::Vozilo(string nazivVozila, string markaVozila, int cenaIzdavanja) {

	this->nazivVozila = nazivVozila;
	this->markaVozila = markaVozila;
	this->cenaIzdavanja = cenaIzdavanja;
	this->izdat = 0;
}

Vozilo::Vozilo() {


}

void Vozilo::pokreniVozilo() {

	cout << "Vozilo pod nazivom " << this->nazivVozila << " se pokrenulo";
}

string Vozilo::getNazivVozila() { return this->nazivVozila; }
void Vozilo::setNazivVozila(string naziv) { this->nazivVozila = naziv; }

string Vozilo::getMarkaVozila() { return this->markaVozila; }
void  Vozilo::setMarkaVozila(string marka) { this->markaVozila = marka; }

int Vozilo::getCenaIzdavanja() { return this->cenaIzdavanja; }
void Vozilo::setCenaIzdavanja(int cena) { this->cenaIzdavanja = cena; }

int Vozilo::getIzdat() { return this->izdat; }
void Vozilo::setIzdat(int i) { this->izdat = i; }

