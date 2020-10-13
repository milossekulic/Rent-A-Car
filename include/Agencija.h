#pragma once
#include "Vozilo.h"
#include "Klijent.h"


class Agencija {


private:

	Vozilo *listaVozila;
	double zarada;
	int brojac;
	int kapacitet;


public:

	Agencija(int kapacitet);

	void dodajVozilo(Vozilo* v);
	void IzdajVozilo(Vozilo *v, Klijent *k);

	double getZarada();

	void SvaVozilaAgencije();
	void svaSlobodnaVozila();

	Vozilo* getVozilo(int i); //vraca vozilo sa zadatog broja



};
