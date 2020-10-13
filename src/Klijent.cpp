#include "Klijent.h"

Klijent::Klijent(string ime, string prezime) {

	this->ime = ime;
	this->prezime = prezime;
}

string Klijent::getIme() { return this->ime; }

void Klijent::setIme(string ime) {
	this->ime = ime;
}

string Klijent::getPrezime() { return this->prezime; }
void Klijent::setPrezime(string prezime) {
	this->prezime = prezime;
}
