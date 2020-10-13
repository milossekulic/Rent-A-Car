    #include "Motor.h"


Motor::Motor(string nazivVozila, string markaVozila, int cenaIzdavanja, int ubrzanje) :Vozilo(nazivVozila, markaVozila, cenaIzdavanja) {

	this->ubrzanje = ubrzanje;
}

int Motor::getUbrzanje() { return this->ubrzanje; }
void Motor::setUbrzanje() { this->ubrzanje = ubrzanje; }



