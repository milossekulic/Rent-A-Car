    #pragma once
#include"Automobil.h"

class Motor : public Vozilo {

private:
	int ubrzanje;

public:

	Motor(string nazivVozila, string markaVozila, int ubrzanje, int cenaIzdavanja);


	int getUbrzanje();
	void setUbrzanje();


};


