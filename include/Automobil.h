    #pragma once
#include<iostream>
#include<string>
#include"Vozilo.h"

class Automobil : public Vozilo {

private:
	int maxBrzina;


public:

	Automobil(string nazivVozila, string markaVozila, int cenaIzdavanja, int maxBrzina);

	int getMaxBrzina();
	void setMaxBrzina(int max);

	void DaLiJeAutomobilSportski();

};



